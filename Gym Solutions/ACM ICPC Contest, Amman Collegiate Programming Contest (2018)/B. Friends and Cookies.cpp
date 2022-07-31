// Author : ALi Tarek
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
const int N = 1e6+7;
vector< pair<int, int> > dxy = {{1, 0}, {-1, 0}, {0, 1}, {0, -1},
                                {-1, 1}, {-1, -1}, {1, 1}, {1, -1}};




void doWork() {
    ll x, n;
    cin>>x>>n;
    ll inc = 0;
    if((2*n-2) != 0)
        inc = x/(2*n-2);
    vector<ll> v(n+1, 0);
    v[1] += inc;
    v[n] += inc;
    for(int i = 2; i< n; i++){
        v[i] += (2ll*inc);
    }
    ll rem = 0;
    if((2 *n - 2) != 0){
        rem = x % (2*n - 2);
    }
    bool add = true;
    ll fir = 1;
    while(rem){
        v[fir]++;
        if(add) fir++;
        else fir--;
        if(fir == n + 1){
            add = false;
            fir = n - 1;
        }
        rem--;
    }
    if(n == 1){
        v[1] = x;
    }
    for(int i = 1; i<= n; i++){
        cout<<v[i]<<" ";
    }
    cout<<el;
}







int main(){
    fast
//    freopen("i.in", "r", stdin);   // for file reading
    int testcases = 1; cin>>testcases;

    while (testcases--) {
        doWork();
    }
}