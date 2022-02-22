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
#include <map>
#include<unordered_set>
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
#define sz(v) (int) v.size()
#define cin(vec) for(auto& i : vec) cin >> i
#define cin_2d(vec, n, m) for(int i = 0; i < n; i++) for(int j = 0; j < m && cin >> vec[i][j]; j++);
#define cout(vec) for(auto& i : vec) {cout << i << " " ; cout << "\n";}
#define cout_2d(vec, n, m) for(int i = 0; i < n; i++, cout << "\n") for(int j = 0; j < m && cout << vec[i][j] << " "; j++);
const ll N = 1e6+1211,NN = 105, mod = 1e9 + 7;
ll REMINDER = 1000000007;
/*
int n, m;
char grid[1001][1001];
int vis[1001][1001];
1
int di[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dj[] = {1, -1, 0, 1, -1, 0, 1, -1};
*/
void solve() {
    ll n,i = 0, j = 0, cnt =0;
     ll m,k; cin>>n>>m>>k;
     vector<ll>hole(m);
map<ll,ll>vis;
     for(i=0;i<m;i++){
         cin>>hole[i];
         vis[hole[i]]++;
     }
     vector<pair<ll,ll>>swaps(k);
     for(i=0;i<k;i++){
         cin>>swaps[i].first>>swaps[i].second;
     }
  ll pos=1;
   for(i=0;i<k;i++){
      if(pos==swaps[i].first && !vis[swaps[i].first]){
          pos=swaps[i].second;
      }
      else if( pos==swaps[i].second &&  !vis[swaps[i].second] ){
          pos=swaps[i].first;
      }
   }

cout<<pos;


}
int main()
{
    fast; // ashf gamed tenen
    //freopen("window.in", "r", stdin);   // for file reading
    ll test_case=1 ;  //   cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    return 0;
}