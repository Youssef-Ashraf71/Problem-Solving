// Author : Youssef Ashraf
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
const ll N = 1e5+5,bun = 3, mod = 1e9 + 7;
const int oo= 0x3f3f3f3f;
const double pi =3.141592653589793238462643383279502884197;
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
struct  ashf {
    ll l,r,v;
}trash[N];
bool cmp(ashf a,ashf b ){
    return a.r<b.r;
}
ll l[N],r[N],v[N],pre[N];

void   ashf_gamed_tenen( ll m){

}
void solve()
{
    ll n,i=0,j=0,cnt=0;
    ll m,k; cin>>m>>k;
    for(i=1;i<=m;i++){
        cin>>trash[i].l>>trash[i].r>>trash[i].v;
    }
    sort(trash+1,trash+1+m,cmp);
    for(i=1;i<=m;i++){
        l[i]=trash[i].l;  r[i]=trash[i].r; v[i]=trash[i].v;
        pre[i]=pre[i-1]+(r[i]-l[i]+1)*v[i]; // pre on values of segments
    }
    l[m+1]=2000000000;  r[m+1]=2000000000;  pre[m+1]=pre[m];   ll ans = 0;
    for(i=1;i<=m;i++){
        ll target= l[i]+k-1; // k 1 idxed
        ll idx=lower_bound(r,r+m+1,target)-r;
        ll sum=pre[idx-1]-pre[i-1];
        if(target>=l[idx])    sum+=(l[i]-l[idx]+k)*v[idx]; // law 3adah yb2a lesa fe elements
        ans=max(ans,sum);
    }
    for(i=1;i<=m;i++){
        ll target= r[i]-k+1;
        ll idx=lower_bound(l,l+m+1,target)-l;
        ll sum=pre[i]-pre[idx-1];
        if(r[idx-1]>=target){
            sum+=(r[idx-1]-(target)+1)*v[idx-1];
        }
        ans=max(ans,sum);
    }

    cout<<ans<<endl;


}
int main()
{
    fast; // ashf gamed tenen
    //freopen("window.in", "r", stdin);   // for file reading
    ll test_case=1 ;         cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    return 0;
}