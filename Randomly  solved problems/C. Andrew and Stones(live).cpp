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
    ll m,i=0,sum=0,numeven=0,storage=0;  bool halmomken=0;
    cin>>m;
    vector<ll>x(m);
    for(i=0;i<m;i++){
        cin>>x[i];
    }
    for(i=1;i<=m-2; i++)
    {
        if(x[i]>1)
            halmomken =true;
        if(!(x[i]%2))
            numeven=1;
    }
    if(halmomken==0) {
        cout << "-1" << endl;
    }
    else if(numeven==0&&m==3) {
        cout <<"-1"<< endl;
    }
    else{
        for(i=1;i<m-1;i++)
        {
            if(x[i]%2==1)
                storage+=floor((x[i]+1)/2);
            else
                storage+=floor( x[i]/2);
        }
        cout<<storage<<endl;
    }
}
int main()
{
    fast; // ashf gamed tenen
    //freopen("window.in", "r", stdin);   // for file reading
    ll test_case=1 ; cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    return 0;
}