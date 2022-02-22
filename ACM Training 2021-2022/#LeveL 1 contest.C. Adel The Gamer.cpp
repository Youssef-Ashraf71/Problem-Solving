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
const int N = 1e5+11,NN = 105, mod = 1e9 + 7;
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
    ll n, m, i = 0, j = 0, cnt = 0;
    cin >> n;
    vector<pair<ll, ll>> x(n);
    for (i = 0; i < n; i++) {
        cin >> x[i].first;
        x[i].second = 1;
    }
    cin >> m;
    for(i=0;i<m;i++){
        ll gli;cin>>gli; gli--;
        x[gli].second =0 ;
}
    for(i=1;i<n;i++)
    {
        if(x[i].second==1)
            x[i].first=x[i].first+x[i-1].first;
    }
    vector<ll> prefix(n);
    for(i=0;i<n;i++)
    {
        if(i==0){
            prefix[i]=x[i].first;
            continue;
        }
        prefix[i]=x[i].first+prefix[i-1];
    }
   ll su=prefix[n-1];
    ll q ; cin>>q;
    while(q--){
        ll op;
        cin >> op;
        if (op == 1){
            ll l,r;
            cin>>l>>r;
            if(l == 1)
                su+=prefix[r-1];
            else
                su+=(prefix[r-1] - prefix[l-2]);
        }
        if(op==2){
            cout<<su<<endl;
        }
    }
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