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
void run() {
    ll n, i = 0, j = 0, cnt = 0;
    string s; cin>>s; ll a=0,b=0;
    for(i=0;i<3;i++){
        a+=s[i]-'0';
    }
    for(i=3;i<6;i++){
        b+=s[i]-'0';
    }
    if(a==b){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;




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
