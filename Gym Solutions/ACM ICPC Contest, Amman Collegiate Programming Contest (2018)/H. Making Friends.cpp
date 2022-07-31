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
const int N = 1e6+7;
vector< pair<int, int> > dxy = {{1, 0}, {-1, 0}, {0, 1}, {0, -1},
                                {-1, 1}, {-1, -1}, {1, 1}, {1, -1}};




void doWork() {
    int n;
    cin>>n;
    vector<int> v(2*n+1);
    for(int i = 1; i <= 2*n; i++){
        cin>>v[i];
    }
    int mx = 0;
    for(int i = 1; i <= n; i++){
        mx = max(mx, v[i]+v[2*n-i+1]);
    }
    cout<<mx<<el;
}







int main(){
    fast
//    freopen("i.in", "r", stdin);   // for file reading
    int testcases = 1; cin>>testcases;

    while (testcases--) {
        doWork();
    }
}