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
void solve() {
    ll m,i,it1=0,it2=0,it=0;
    cin>>m;
    vector<int>mama(m);
    for(i=0;i<m;i++){
        cin>>mama[i];
    }
    int track=0,k=0;
    for(it=1;it<=m;it++){
        for(it1=0,it2=it-1;it2<=m-1;it2++,it1++){
            int  try1=0;
            for(k=it1;k<it2+1;k++) {
                bool tr=!mama[k];
                   if(tr)
                    try1++;
            }
            track+=it; track+=try1;
        }
    }
    cout<<track<<endl;
}
int main()
{
    fast; // ashf gamed tenen
    //freopen("window.in", "r", stdin);   // for file reading
    ll test_case=1 ;    cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    return 0;
}