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
void call() {
    ll n, i = 0, j = 0, cnt = 0;
    ll k,row,col;
    cin>>n>>k>>row>>col;
    vector<vector<char>>x(n+1,vector<char>(n+1));
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            x[i][j]='.';
        }
    }
ll fard=n+n,cell=row+col; // nxn
for(i=2;i<=fard;i++){
    ll cur=llabs(i-cell);
    if(cur%k) continue;
    for(j=1;j<=n;j++){
        for(cnt=1;cnt<=n;cnt++){
            if(cnt==i-j){
                x[j][cnt]='X';
            }
        }
    }
}
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<x[i][j];
        }
        cout<<endl;
    }

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