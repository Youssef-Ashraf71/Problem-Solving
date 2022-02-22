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
    ll n,i, j = 0, cnt =0;
     string ans; cin>>ans;
     bool red=0,green=0,blue=0,f_gr=0,f_re=0,f_bl=0,flag=1;
     for(i=0;i<ans.size();i++){
         if(ans[i]=='r'){
             f_re=1;
         }
         else if(ans[i]=='g'){
             f_gr=1;
         }
         else if(ans[i]=='b'){
             f_bl=1;
         }
         if(ans[i]=='R'){
             if(f_re)
                 red=1;
             else{
                 flag=0;
                 break;
             }
         }
         else if(ans[i]=='G'){
             if(f_gr)
                 green=1;
             else{
                 flag=0;
                 break;
             }
         }
         else if(ans[i]=='B'){
             if(f_bl)
                 blue=1;
             else{
                 flag=0;
                 break;
             }
         }
     }
     if(!flag){
         cout<<"NO"<<endl; return;
     }
     if(red && green && blue){
         cout<<"YES"<<endl;
     }
}
int main()
{
    fast; // ashf gamed tenen
    //freopen("window.in", "r", stdin);   // for file reading
    ll test_case=1 ;   cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    return 0;
}