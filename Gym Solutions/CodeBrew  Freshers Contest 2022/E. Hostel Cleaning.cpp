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
    ll k; cin>>n>>k;
    vector<ll>cur(n); cin(cur);
    /*
     *  k factor men n a2al sewwpper n div k
     *  ehtmalat >> k
     *  i%k
     *  k sets
     */
     vector<ll>cs(k,0);
    for(i=1;i<=n;i++){
        ll idx=(i-1)%k; cs[idx]+=cur[i-1];
    }
    ll ans=1000000000000000000;
    for(i=0;i<k;i++){
        if(!cs[i]) continue;
        ans=min(ans,cs[i]);
    }
 cout<<ans<<endl;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t=1;
   // cin>>t;
    while (t--) solve();


}
