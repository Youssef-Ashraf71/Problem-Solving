#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
long long mod = 1e9+7;
#define endl '\n'
#define ll long long
#define ull unsigned long long
const int N = 1e5+3;
int n,m,k;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("lego.in","r",stdin);
    cin>>n>>m;
    int a,b;
    cin>>a>>b;
    int l=a,r=b;
    int ok(1);
    for(int i=1;i<m;i++) {
        cin>>a>>b;
        if(b<l || a>r) ok=0;
        l = max(l,a);
        r = min(r,b);
    }
    if(ok) cout<<(r-l+1)<<endl;
    else cout<<0<<endl;

}

