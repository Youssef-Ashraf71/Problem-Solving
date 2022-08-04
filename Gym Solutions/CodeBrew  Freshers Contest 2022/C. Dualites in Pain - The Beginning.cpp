#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <bits/stdc++.h>
using ll = long long;
using ld = long double;
#define all(v) v.begin(),v.end()
#define cin(arr) for(auto& j : arr) cin >> j;
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
using namespace __gnu_pbds;
using namespace std;
void solve()
{
    ll n,i,j,cnt=0;
    cin>>n; vector<ll>arr(n); cin(arr); sort(all(arr));
    if(arr[n-1]-arr[n-2]<=1){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;


}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t=1;
   // cin>>t;
    while (t--) solve();


}
