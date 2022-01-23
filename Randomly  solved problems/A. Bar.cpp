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
#include <unordered_map>
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
const int N = 1e6 + 50,NN = 105, mod = 1e9 + 7;
ll REMINDER = 1000000007;
/*
int n, m;
char grid[1001][1001];
int vis[1001][1001];
1
int di[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dj[] = {1, -1, 0, 1, -1, 0, 1, -1};
*/\
void solve() {
    ll n, i = 0, j = 0, cnt = 0;
    cin >> n;
    vector<string> x(n);
    for (auto &it:x){
        cin >> it;
}
    string y[11]={"ABSINTH","BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
for(i=0;i<n;i++){
    bool flag1=0;
    for(j=0;j<11;j++){
        if(x[i]==y[j]){
            cnt++;
            flag1=1;
            break;
        }
    }
    string tmp; tmp=""; tmp+=x[i];
    if(tmp[0]>='A' && tmp[0]<='Z' && flag1==0)
    {
        continue;
    }
    if(!flag1 ){
        stringstream geek(x[i]);
        int lol = 0;
        geek >> lol;
     if(lol<18){
         cnt++;
     }
    }
}
cout<<cnt<<endl;



}
int main()
{
    fast; // ashf gamed tenen
    //freopen("window.in", "r", stdin);   // for file reading
    ll test_case=1 ;// cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    return 0;
}
