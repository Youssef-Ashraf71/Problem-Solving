#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0);  cout.tie(0);
using namespace std;
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define cin(vec) for(auto& i : vec) cin >> i;
#define couth(vec) for(auto& i : vec) {cout << i << " " ;}
const ll N = 1e7,bun = 3, mod = 1e9 + 7;
const int oo= 0x3f3f3f3f;
ll REMINDER = 1000000007;
ll n,coin;
bool work(ll d,ll tar,vector<ll>x){
    vector<ll>cur(d,-1); ll i,j,it; it=0;  ll acc=0; tar++;
    for(i=0;i<d;i++){
        if(cur[i]==-1){
            for(j=i;j<d;j+=tar){
                (it<n) ? cur[j]=x[it]:cur[j]=0;
            }
            it++;
        }
    }
    acc=accumulate(all(cur),0LL);
    if(acc<coin) return 0;  return 1;
}
void go()
{
    ll i=0,j=1; ll cnt=0;
    ll d; cin>>n>>coin>>d; vector<ll>x(n); cin(x); sort(rall(x));
    ll l,r,ans; ans=l=0;r=d;
    if(work(d,d-1,x)){
        cout<<"Infinity"<<endl; return;
    }
    if(!work(d,0,x)){
        cout<<"Impossible"<<endl; return;
    }
    while(l<=r){
        ll mid=(l+r)/2;
        if(work(d,mid,x)){
            l=ans=mid; l++;
        }
        else{
            r=mid-1;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    fast;
    ll t=1 ;      cin >> t;
    while (t--)
    {
        go();
    }
    return 0;
}