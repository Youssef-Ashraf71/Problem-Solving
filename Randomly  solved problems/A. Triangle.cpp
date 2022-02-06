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
int chk( int x1, int y1, int x2, int y2, int x3, int y3)
{
    int x, y, z;
    if (((x1 == x2) && (y1 == y2)) || ((x1 == x3) && (y1 == y3)) || ((x2 == x3) && (y2 == y3)))
        return 0;
    x = (x2 - x1) * (x3 - x1) + (y2 - y1) * (y3 - y1);
    y = (x1 - x2) * (x3 - x2) + (y1 - y2) * (y3 - y2);
    z = (x1 - x3) * (x2 - x3) + (y1 - y3) * (y2 - y3);
    if (x == 0 || y == 0 || z == 0)
        return 1;
    return 0;
}
    void solve(){
    ll  n,i,j,cnt=0;
    ll x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
        if (chk(x1, y1, x2, y2, x3, y3))
        {
           cout<<"RIGHT"<<endl;
        }
        else if (chk(x1 - 1, y1, x2, y2, x3, y3) == 1 || chk(x1 + 1, y1, x2, y2, x3, y3) == 1 || chk(x1, y1 + 1, x2, y2, x3, y3) == 1 || chk(x1, y1 - 1, x2, y2, x3, y3) == 1 || chk(x1, y1, x2 + 1, y2, x3, y3) == 1 || chk(x1, y1, x2 - 1, y2, x3, y3) == 1 || chk(x1, y1, x2, y2 + 1, x3, y3) == 1 || chk(x1, y1, x2, y2 - 1, x3, y3) == 1 || chk(x1, y1, x2, y2, x3 + 1, y3) == 1 || chk(x1, y1, x2, y2, x3 - 1, y3) == 1 || chk(x1, y1, x2, y2, x3, y3 + 1) == 1 || chk(x1, y1, x2, y2, x3, y3 - 1) == 1)
        {
            cout<<"ALMOST"<<endl;
        }
        else
        {
            cout<<"NEITHER"<<endl;
        }
}
int main()
{
    fast; // ashf gamed tenen
    //freopen("window.in", "r", stdin);   // for file reading
    ll test_case=1 ; // cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    return 0;
}
