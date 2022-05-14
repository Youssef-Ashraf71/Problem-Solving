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
ll dif(string a, string b){
    ll cnt=0;
    for(int i=0;i<a.size();i++){
        cnt+=llabs(a[i]-b[i]);
    }
    return cnt;
}
void run() {
    ll n, i = 0, j = 0, cnt = 0;
    cin>>n ; ll m; cin>>m;
    vector<string>x(n); for(i=0;i<n;i++){  cin>>x[i] ;}
    vector<ll>ans;
     for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            ans.emplace_back(dif(x[i],x[j]));
        }
    }
cout<<*min_element(all(ans))<<endl;


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
