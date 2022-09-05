#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define F first
#define S second
#define all(v) v.begin(),v.end()
#define cin(st) for(auto& t : st) cin >> t;
const int N = 1e6 + 50,NN = 105, mod = 1e9 + 7;
ll REMINDER = 1000000007;
bool ok(int x, int y,int n, int m) { return x >= 0 && y >= 0 && x < n && y < m; }
const int dx[] = { 1, -1, 0, 0 };
const int dy[] = { 0, 0, 1, -1 };
ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
vector<ll> fact(1e5 + 1, 0);
vector<ll> ifact(1e5+ 1, 0);
ll nCr(ll n, ll r)
{
    if (r > n)return 0;
    ll ans = fact[n];
    ans = mod_mul(ans, ifact[r]);   ans = mod_mul(ans, ifact[n - r]);
    return ans;
}
void initalize(){
    fact[0] = 1; ifact[0] = 1;
    for (int j = 1; j <= 1e5; j++) fact[j] = fact[j - 1] * j % mod;
    for (int j = 1; j <= 1e5; j++) ifact[j] = inv(fact[j]);
}
void call() {
    ll n, i = 0, j = 0, cnt = 0;
    initalize();
    ll k;   cin>>n>>k; ll ans=0;
    if(n<=k){ cout<<pwr(2,n)%mod<<endl; return; }
    for(i=0;i<=min(n,k);i++){
        ans=(ans + nCr(n,i)) % mod;
    }
    cout<<ans%mod;

}

int main()
{
    ll testo=1 ;
    // cin >> testo;
    while (testo--)
    {
        call();
    }
    return 0;
}