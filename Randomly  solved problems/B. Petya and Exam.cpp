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
string alph="abcdefghijklmnopqrstuvwxyz";
void solve()
{
    ll i=0,j=0,cnt=0;
    string s; cin>>s;
    map<char,ll>vis; for(i=0;i<alph.size();i++) vis[alph[i]]=0;
    for(i=0;i<s.size();i++) vis[s[i]]++;
    string in; cin>>in;  ll q; cin>>q; ll pos=-1;
    for(i=0;i<in.size();i++) if(in[i]=='*'){  pos=i; break;  }
    while (q--){
        string ans; cin>>ans; bool ok=1;  string cmp=in;
        ll sans=ans.size(),szin=cmp.size();
        ll len=(sans-szin)+1;
        if(pos==-1){
            if(cmp.size() != ans.size()) ok=0;
            for(i=0;i<cmp.size();i++){
                if(cmp[i]!=ans[i] && cmp[i]!='?') {  ok=0;  break; }
                else if(cmp[i]=='?' ){
                    if(vis[ans[i]]) continue;
                    else {  ok=0; break;   }
                }
            }
        }
        if(len<0){ ok=0;  }
        if(!ok) { cout<<"NO"<<endl; continue; }
        for(i=0;i<pos;i++) {
            if (cmp[i] != '*' && cmp[i] != '?') {
                if (cmp[i] != ans[i]) {
                    ok = 0;
                    break;
                }
            } else if (cmp[i] == '?') {
                if (vis[ans[i]]) continue;
                else {
                    ok = 0;
                    break;
                }
            }
        }
         ll r = ans.size()-1;
        for (i = cmp.size() - 1; i > pos; i-- ,r--) {
            if(cmp[i] != '?' && ans[r] != cmp[i]) {  ok = 0 ; break;   }
            if(cmp[i] == '?' && !vis[ans[r]]) ok = 0;
        }
        for(i = pos;i<=r;i++) {
            if(vis[ans[i]]) ok = 0;
        }
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }





}
int main()
{
    fast; // ashf gamed tenen
    //freopen("window.in", "r", stdin);   // for file reading
    ll test_case=1 ;     //   cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    return 0;
}