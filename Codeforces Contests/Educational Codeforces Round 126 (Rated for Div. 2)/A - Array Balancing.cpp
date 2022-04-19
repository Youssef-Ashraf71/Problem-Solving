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
typedef tree<int,null_type,less<>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
const ll N = 1e7,NN = 105, mod = 1e9 + 7;
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
void solve() {
    ll n, i = 1, j = 0, cnt=0;
    cin>>n;
    ll x[2][n];
    for(i=0;i<2;i++){
        for(j=0;j<n;j++){
            cin>>x[i][j];
        }
    }
    for(i=1;i<n;i++){
        ll t1=llabs(x[0][i-1]-x[0][i]) + llabs(x[1][i]-x[1][i-1]); ll t2=llabs(x[1][i-1]-x[0][i]) + llabs(x[0][i-1]-x[1][i]);
        if(t1<t2){
            swap(x[0][i],x[1][i]);
        }
        cnt+=min(t1,t2);
    }
    cout<<cnt<<endl;

}
int main()
{
    fast; // ashf gamed tenen
    //freopen("window.in", "r", stdin);   // for file reading
    ll test_case=1 ;     cin >> test_case;

    while (test_case--)
    {
        solve();
    }
    return 0;
}