// Author : Youssef Ashraf
#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
long long mod = 1e9+7;
#define endl '\n'
#define ll long long
#define ull unsigned long long
const int N = 1e5+1;
// int vis[N]; 1e9 >> array  fails 1e6 mx
ll ans = LONG_LONG_MAX;
map<ll,ll>dp;
ll go(ll n){
    if(dp[n]) return dp[n];
    // ans>n-ans , 2*ans>n , ans>n/2 , ans=n/2+1
    ll ans=n/2+1;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0ll) {
            ll num1 = i, num2 = n / i;
            ans = min(ans,(num2/2+1)*go(num1));
        }
    }
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0ll) {
            ll num1 = i, num2 = n / i;
            ans = min(ans,(num1/2+1)*go(num2));
        }
    }
    dp[n]=ans;
    return dp[n];
}
int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("lego.in","r",stdin);
    ll n;
    cin >> n;
   // memset(vis,0,sizeof(vis));
    cout<<go(n)<<endl;
    /*
    if(n%2 || n==2) cout<<ans;
    else {
        ans = (n/4) + 1;
        ans += ((n/8) + 1);
        cout<<ans;
    }
     */
}