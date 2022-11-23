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
    ll n,i=0,j=1;
    cin>>n;
    vector<ll>x(n); cin(x);
    ll mx=*max_element(all(x));
    vector<ll>y; y=x; sort(all(y));
    for(i=0;i<n;i++){
        if(x[i]==mx){
            cout<<x[i]-y[n-2]<<" ";
        }
        else  cout<<x[i]-mx<<" ";
    }
    cout<<endl;


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