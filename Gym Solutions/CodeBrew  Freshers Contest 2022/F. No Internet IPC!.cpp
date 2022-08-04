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
        cin>>n>>m;
        if(n==1) cout<<0;
        else {
            int curr=2,time=1;
            while(curr<m && curr<n) {
                curr+=curr;
                time++;
            }
            if(curr<n) time += ceil(1.0*(n-curr)/m);
            cout<<time<<endl;
        }
    }

}

