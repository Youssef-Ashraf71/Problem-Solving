#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define F first
#define S second
#define all(v) v.begin(),v.end()
#define cin(st) for(auto& t : st) cin >> t;
const int N = 1e6 + 50,NN = 105, mod = 1e9 + 7;
ll REMINDER = 1000000007;
bool ok(int x, int y,int n, int m) { return x >= 0 && y >= 0 && x < n && y < m; }
const int dx[] = { 1, -1, 0, 0 };
const int dy[] = { 0, 0, 1, -1 };
ll printNcR(ll n, ll r)
{
    long long p = 1, k = 1;

    if (n - r < r)
        r = n - r;

    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;


            long long m = __gcd(p, k);

            p /= m;
            k /= m;

            n--;
            r--;
        }
    }

    else
        p = 1;

    return p;
}
void call() {
    ll n, i = 0, j = 0, cnt = 0;
   cin>>n;
   vector<ll>x(n+1),y(n+1);
   bool ok1,ok2; ok1=ok2=1; ll shif=2;
    for(i=1;i<=n+n;i++) {
        if (i>n) cin>>y[i-n];
        else cin>>x[i];
    }
    for(i=1;i<=n;++i,shif++) {
        if(shif==n+1) shif=1;
        if(x[i]>y[i]||((x[i]!=y[i])&&(y[i]-2>=y[shif]))) {
            cout<<"NO"<<endl;    return;
        }
    }
    for(i=1;i<=n;++i) {
        if(x[i]-y[i]!=1) ok2=0;
    }
    if(ok2) {
        ok1=1;
    }
    if(ok1) cout<<"YES"<<endl;



}

int main()
{
    ll testo=1 ;
    cin >> testo;
    while (testo--)
    {
        call();
    }
    return 0;
}