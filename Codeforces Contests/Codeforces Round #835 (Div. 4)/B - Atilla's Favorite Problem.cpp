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
    cin>>n; string s; cin>>s;
    map<char,ll>vis,val;
    for(i=0;i<n;i++) vis[s[i]]++;
    for(i='a';i<='z';i++){
        val[i]=j++;
    }
    sort(all(s)); cout<<val[s[n-1]]<<endl;



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