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

ll n;
void go()
{
    ll i=0,j=1; ll cnt=0;
    cin>>n; ll x[n];
    for(i=0;i<n;i++) cin>>x[i];
    n=unique(x,x+n)-x;
    if(n<=2){ cout<<"YES"<<endl; return; }
    for(i=1;i<n-1;i++){
        if(x[i]<x[i-1]&&x[i]<x[i+1]) cnt++;
    }
    if(x[0]<x[1]) cnt++;
    if(x[n-1]<x[n-2]) cnt++;
    (cnt==1)? cout<<"YES"<<endl:cout<<"NO"<<endl;

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