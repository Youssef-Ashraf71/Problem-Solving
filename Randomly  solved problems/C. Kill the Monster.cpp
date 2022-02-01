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
*/
    void solve(){
    ll  helc,delc,helm,delm,kup,wep,armm,i,j,cnt=0;
    cin>>helc>>delc>>helm>>delm>>kup>>wep>>armm;
    bool flag = 0;
    for( i = 0; i <= kup; i++){
        ll  now = i;
        ll stor1 = delc + (wep*now);
        ll stor2 = helc + (armm * (kup-now));
        ll try1 = helm/stor1;
        ll try2 = stor2/delm;
        if(helm%stor1){
            try1++;
        }
        if(stor2%delm){
            try2++;
        }
        if(try1 <= try2){
            flag = 1;
            break;
        }
    }
    if(flag){
        cout << "YES" <<endl;
    }
    else{
        cout << "NO" <<endl;
    }
}
int main()
{
    fast; // ashf gamed tenen
    //freopen("window.in", "r", stdin);   // for file reading
    ll test_case=1 ;  cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    return 0;
}