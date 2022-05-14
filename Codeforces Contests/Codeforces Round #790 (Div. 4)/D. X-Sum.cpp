#include <bits/stdc++.h>
#define ll long long
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
ll dx[]={-1,1,-1,1};
ll dy[]={-1,-1,1,1};
bool  isok( ll a,ll b,ll n ,ll m)
{
    if(a>=0 && a<n && b>=0 && b<m) return 1;
    return 0;
}
void run() {
    ll n, i = 0, j = 0, cnt = 0;
    ll m; cin>>n>>m;  ll maxi=-11100;
    vector<vector<ll>>x(n); for(i=0;i<n;i++) x[i]=vector<ll>(m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>x[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            ll cur=x[i][j]; ll ia,ja;
            for(int delta=0; delta<4; delta++)
            {
                ia=i+dx[delta]; ja=j+dy[delta];
                while(isok(ia,ja,n,m))
                {
                    cur+=x[ia][ja];  ia+=dx[delta]; ja+=dy[delta];
                }
            }
            maxi=max(maxi,cur);
        }
    }
 cout<<maxi<<endl;



}
int main()
{
    ll t=1 ;
    cin >> t;
    while (t--)
    {
        run();
    }
    return 0;
}
