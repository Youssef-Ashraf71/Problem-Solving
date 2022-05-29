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
#define cin_2d(vec, n, m) for(int i = 0; i < n; i++) for(int j = 0; j < m && cin >> vec[i][j]; j++);
#define coutv(vec) for(auto& i : vec) {cout << i << " " ; cout << "\n";}
#define couth(vec) for(auto& i : vec) {cout << i << " " ;}
#define cout_2d(vec, n, m) for(int i = 0; i < n; i++, cout << "\n") for(int j = 0; j < m && cout << vec[i][j] << " "; j++);
using namespace __gnu_pbds;
typedef tree<pair<ll,ll>,null_type,less<>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
const ll N = 1e7,bun = 3, mod = 1e9 + 7;
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
bool vis[100000];ll n,m;
vector<ll>leaves;
void dfs(ll node, ll m, ll gymeno, vector<vector<ll>> &adj, vector<ll>&cats, ll mx, ll consec, ll &cnt){
    bool isleave=1;
    if (cats[node]) consec++;
    else consec = 0;
    mx=max(consec,mx);
   //  cout<<"Node is " << node<< "  ana gy men node "<<ck<<endl;
    for(auto & it:adj[node]){
        if(it!=gymeno ) {  dfs(it,m,node,adj,cats,mx,consec,cnt) ;    isleave=0;   }
    }
    if ( isleave && mx<= m) { cnt++; }
}
void solve()
{
    ll i=0,j=0,cnt=0;  ll gymeno=0;
    cin>>n>>m;   memset(vis,0,sizeof(vis));
    vector<ll>cats(n+1,0); cats[0]=0;
    for(i=1;i<=n;i++){
        cin>>cats[i];
    }
    // couth(cats); cout<<endl;
    vector<vector<ll>>adj(n+1);
    for(i=0;i<n-1;i++){
        ll u,v; cin>>u>>v;  adj[u].push_back(v); adj[v].push_back(u);
    }
    for(i=1;i<=n;i++){
        if(adj[i].size()==1)   leaves.emplace_back(i);
    }
     dfs(1,m,gymeno,adj,cats,0,0,cnt);
     cout<<cnt<<endl;

}
int main()
{
    fast; // ashf gamed tenen
    //freopen("window.in", "r", stdin);   // for file reading
    ll test_case=1 ;   //      cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    return 0;
}