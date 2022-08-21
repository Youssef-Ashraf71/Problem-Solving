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
    int n, m;
    cin>>n>>m;
    set<int> ages, candies;
    map<int, int> stu, can;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        stu[x]++;
        ages.insert(x);
    }
    for(int i = 0; i < m; i++){
        int c;
        cin>>c;
        can[c]++;
        candies.insert(c);
    }
    bool valid = true;
    for(auto &age: ages){
        int tar = -1;
        for(auto &candy: candies){
            if(can[candy] >= stu[age]){
                tar = candy;
                break;
            }
        }
        if(tar == -1){
            valid=false;
        }
        else{
            for(int i = 1; i<= tar; i++){
                if(candies.find(i) != candies.end()){
                    candies.erase(i);
                }
            }
        }
    }

    cout<<(valid? "YES": "NO")<<el;

}







int main(){
    fast
//    freopen("i.in", "r", stdin);   // for file reading
    int testcases = 1; cin>>testcases;

    while (testcases--) {
        doWork();
    }
}