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
#define REPi(a,b) for (int i = a; i <= b; i++)
#define REPj(a,b) for (int j = a; j <= b; j++)
#define genMod(x,Mod) (x<0)?(x % Mod + Mod) : (x % Mod)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v) (int) v.size()
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
1
int di[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dj[] = {1, -1, 0, 1, -1, 0, 1, -1};
const int dx[] = { 1, -1, 0, 0 };
const int dy[] = { 0, 0, 1, -1 };
*/
ll cm(char s){
    return s-'0';
}
void rotate( vector<vector<ll>>&a)
{
   ll  n=a.size(),sum;
    for (ll i = 0; i < n / 2; i++) {
        for (ll j = i; j<n-i-1; j++) {
            ll tmp =a[i][j];
            a[i][j]=a[n-1-j][i];
            a[n-1-j][i] = a[n-1-i][n-1-j];
            a[n-1-i][n-1-j]=a[j][n-1-i];
            a[j][n-1-i]=tmp;
        }
    }
}
void solve()
{
    ll n,i=0,j=0,cnt=0;
    cin>>n;
    vector<string>x(n); cin(x); ll ans=0;
    vector<vector<ll>>a(n,vector<ll>(n)),a1(n,vector<ll>(n));
    for(i=0;i<n;i++){
     for(j=0;j<n;j++){
         a[i][j]=cm(x[i][j]);
     }
    } a1=a;
    vector<vector<ll>>a2(n,vector<ll>(n));   vector<vector<ll>>a3(n,vector<ll>(n));   vector<vector<ll>>a4(n,vector<ll>(n));
    rotate(a); a2=a;
    rotate(a); a3=a;
    rotate(a); a4=a;
    for(i=0;i<n;i++){
      ll   sum=0;
        for(j=0;j<n;j++){
             sum=0;
            sum+=a1[i][j]+a2[i][j]+a3[i][j]+a4[i][j];
            ans+=min(sum,4-sum);
        }
    }
    cout<<ans/4<<endl;





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