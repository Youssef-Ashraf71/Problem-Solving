// Author : Youssef Ashraf
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
 bool ok(int x, int y,int n, int m) { return x >= 0 && y >= 0 && x < n && y < m; }
const int dx[] = { 1, -1, 0, 0 };
const int dy[] = { 0, 0, 1, -1 };
*/
bool ok(ll val,ll p, ll q,vector<ll>&x){
    ll n,i,j,cnt=0;   ll dmg=val*q;
    for(i=0;i<x.size();i++){
        if(dmg<=x[i]){
            if(p==q) return 0;
            ll ba2y=x[i]-dmg;  ll ba2ymon=ba2y/(p-q);
            if(ba2y>ba2ymon*(p-q)) ba2ymon++;
            cnt+=ba2ymon;
        }
    }
    if(cnt>val) return 0;
    return 1;
}
void solve()
{
    ll n,i=0,j=0,cnt=0;
    ll p,q; cin>>n>>p>>q;
    // p to mon p-q to ba2y
    vector<ll>x(n); cin(x);
    if(p==q){
        // (mx+p-1)/p >> (mx-1)/p+1
        cout<<(*max_element(all(x))-1)/p+1<<endl; return;
    }
    ll l,r; l=0; r=1e9+10; ll ans=100000;
    while(l<=r){
        ll mid=l+(r-l)/2;
        if(ok(mid,p,q,x)) {
            ans=mid;    r=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans<<endl;




}
int main()
{
    fast; // ashf gamed tenen
    //freopen("window.in", "r", stdin);   // for file reading
    ll test_case=1 ;  //    cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    return 0;
}