/*
       ____            ___________
      /\   \          |
     /  \   \         |
    /    \   \        |___________
   /______\   \                  |
  /        \   \                 |
 /          \  /       __________|
/            \/

 ___  ___              F
|\  \|\   \            F
\ \  \_\   \           F
 \ \ ___    \          F
  \  \ \\ \  \         F
   \  \__\\ \_\        F
    \ |__| \|__|       F

 */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define ull unsigned long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0);  cout.tie(0);
using namespace std;
#define genMod(x,Mod) (x<0)?(x % Mod + Mod) : (x % Mod)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define cin(vec) for(auto& i : vec) cin >> i;
#define el   endl
#define cin_2d(vec, n, m) for(int i = 0; i < n; i++) {for(int j = 0; j < m ;j++ ){ cin >> vec[i][j];}  }
#define coutv(vec) for(auto& i : vec) {cout << i << " " ; cout << "\n";}
#define couth(vec) for(auto& i : vec) {cout << i << " " ;}
#define cout_2d(vec, n, m) for(int i = 0; i < n; i++, cout << "\n") for(int j = 0; j < m && cout << vec[i][j] << " "; j++);
using namespace __gnu_pbds;
typedef tree<pair<ll,ll>,null_type,less<>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
const ll N = 1e7,bun = 3, mod = 1e9 + 7;
const int oo= 0x3f3f3f3f;
ll REMINDER = 1000000007;
/*
int n, m;
char grid[1001][1001];
int vis[1001][1001];
int di[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dj[] = {1, -1, 0, 1, -1, 0, 1, -1};
 bool ok(int x, int y,int n, int m) { return x >= 0 && y >= 0 && x < n && y < m; }
const int dx[] = { 1, -1, 0, 0 };
const int dy[] = { 0, 0, 1, -1 };
ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
ll lcm(int a, int b)  { return (a / gcd(a, b)) * b; }
ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
*/
vector<ll>primes;
void GoPrimes(ll div){
    while (div>1){
        for(int i=2;i<=div;i++){
            while (div%i==0){
                primes.push_back(i); div/=i;
            }
        }
    }
}
void solve()
{
    ll n,i=0,j=0,cnt=0;
    ll x; cin>>n>>x;
    if(n%x){
        cout<<-1<<endl; return; // fails out factor idea << mosta7el tetla3 kolha funny aslan
    }
    primes.clear();
    vector<ll>ans(n); ans[0]=x; ans[n-1]=1;
    // p1 =x , pn =1 so we need min path from x to n >> so we factorize n/x to get the factor >> generally ans[i]=i*factor of the path
    // i hate maths
    ll div=n/x;
    GoPrimes(div);
   // couth(primes);
   vector<bool>ok(n+1,0); vector<ll>ellygy(n+1,0);
   ll l=x; // ans[0]=x >> ans[n-1]=n;  left=x , right=n
   for(i=0;i<primes.size();i++){
       ok[l]=1; ellygy[l]=l*primes[i];
       l*=primes[i];
   }
   for(i=1;i<n-1;i++){
      ans[i] =( (ok[i+1])? ellygy[i+1]:i+1);
   }
     couth(ans);  cout<<endl;

}
int main()
{
    fast; // ashf gamed tenen
    //freopen("window.in", "r", stdin);   // for file reading
    ll test_case=1 ;      cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    return 0;
}