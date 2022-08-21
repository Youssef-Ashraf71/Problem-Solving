// Author : Farah Mohamed
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
    int cs; cin>>cs;
    while(cs--) {
        cin>>n;
        string x; cin>>x;
        int c(0);
        for(int i=0;i<n;i++) {
            if(x[i]=='.') {
                if(i>0 && x[i-1]=='*') continue;
                else if(i<n-1 && x[i+1]=='*') continue;
                else {
                    x[i+1] = '*';
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
}

