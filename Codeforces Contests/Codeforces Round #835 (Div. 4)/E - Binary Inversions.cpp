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
void go()
{
    ll n,i=0,j=1; ll cnt=0;
    cin>>n; vector<ll>zer(n+12,0),on(n+12,0),x(n+12,0);
    ll cur=0; ll mx=0;
    for(i=1;i<=n;i++) cin>>x[i];
    for(i=1;i<=n;i++)  on[i]=on[i-1]+x[i];
    for(i=n;i>0;i--) zer[i]=zer[i+1]+(1-x[i]);
    for(i=1;i<=n;i++){
        if(x[i]) cur+=zer[i];
    }
    mx=max(mx,cur);
    for(i=1;i<=n;i++){
         ll tar = cur;
        if(x[i]){
            tar-=zer[i]; tar+= on[i]; tar--;
        }else{
            tar-=on[i]; tar+= zer[i]; tar--;
        }
        mx=max(tar,mx);
    }
    cout<<mx<<endl;
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