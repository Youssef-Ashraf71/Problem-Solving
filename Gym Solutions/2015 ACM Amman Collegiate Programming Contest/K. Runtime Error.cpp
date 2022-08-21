// Author : Ali Tarek
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll   long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0);  cout.tie(0);
#define el '\n'
using namespace std;
using namespace __gnu_pbds;
typedef tree<int,null_type,less<>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
const int MOD = 1e9+7;
const int N = 3e3+7;
vector< pair<int, int> > dxy = {{1, 0}, {-1, 0}, {0, 1}, {0, -1},
                                {-1, 1}, {-1, -1}, {1, 1}, {1, -1}};



void doWork() {
    int n, k;
    cin>>n>>k;
    map<int, int> mp;
    for(int i = 1, nu; i <= n; i++){
        cin>>nu;
        mp[nu]++;
    }
    pair<int, int> ans = {-1, -1};
    for(int i = 1; i * i <= k; i++){
        if(k%i == 0){
            int num = k/i;
            if(num != i && mp[num] && mp[i]){
                if(ans.first == -1){
                    ans = {min(num, i), max(num, i)};
                }
                else{
                    if(min(num, i) < ans.first){
                        ans = {min(num, i), max(num, i)};
                    }
                }
            }
            else if(num == i && mp[num] >= 2){
                if(ans.first == -1){
                    ans = {min(num, i), max(num, i)};
                }
                else{
                    if(min(num, i) < ans.first){
                        ans = {min(num, i), max(num, i)};
                    }
                }
            }
        }
    }
    if(ans.first == -1){
        cout<<-1<<el;
    }
    else{
        cout<<ans.first<<" "<<ans.second<<el;
    }
}







int main(){
    fast
//    freopen("i.in", "r", stdin);   // for file reading
    int testcases = 1; cin>>testcases;

    while (testcases--) {
        doWork();
    }
}