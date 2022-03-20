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
#define rall(v) v.rbegin(),v.rend()
#define sz(v) (int) v.size()
#define cin(vec) for(auto& i : vec) cin >> i;
#define cin_2d(vec, n, m) for(int i = 0; i < n; i++) for(int j = 0; j < m && cin >> vec[i][j]; j++);
#define coutv(vec) for(auto& i : vec) {cout << i << " " ; cout << "\n";}
#define couth(vec) for(auto& i : vec) {cout << i << " " ;}
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
const int dx[] = { 1, -1, 0, 0 };
const int dy[] = { 0, 0, 1, -1 };
*/
void solve() {
    ll n, i = 0, j = 0, cnt = 0;
    cin>>n;
    vector<ll>x(n); cin(x);
    ll mx=-1; if(n==1){ cout<<1<<endl; return;}    if(n==2){ cout<<2<<endl; return;}
    for(i=1;i<n;i++){
     if(x[i]>x[i-1]) {
         break;
     }
    }
    /*
    cout<<x[0]<<" in pos "<<1<<endl;
    cout<<1<<" "<<i<<endl;
    cout<<" lens is  "<<i<<endl; */
     mx=max(mx,i);
    for(i=n-2;i>=0;i--){
        if(x[i-1]>x[i]) {
            break;
        }
    }
    /*
    cout<<x[n-1]<<" in pos "<<n<<endl;
    cout<<i+1<<" "<<n<<endl;
    cout<<" lens is  "<< n-i<<endl;
     */
    mx=max(mx,n-i);
     for(i=1;i<n-1;i++){
         ll l=-1,r=-1;
         for(j=i;j<n-1;j++){
             if(x[j+1]>x[j] && r<0) {
                 r=j;
             }
             else if(j==n-2 && r<0){
                 r=n-1;
             }
         }
         for(j=i;j>0;j--){
             if(x[j]<x[j-1] && l<0) {
                 l=j;
             }
             else if(j==1 && l<0){
                 l=0;
             }
         }
         /*
         cout<<x[i]<<" in pos "<<i+1<<endl;
         cout<<l+1<<" "<<r+1<<endl;
        cout<<" lens is  "<<r-l+1<<endl;
         */
        mx=max(mx,r-l+1);
     }
     cout<<mx<<endl;

}

int main()
{
    fast; // ashf gamed tenen
    //freopen("window.in", "r", stdin);   // for file reading
    ll test_case=1 ;  //    cin >> test_case;

    while (test_case--)
    {
        solve();
    }
    return 0;
}