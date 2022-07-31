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
int n;
string x;


int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("lego.in","r",stdin);
    int cs; cin>>cs;
    while(cs--) {
        cin>>n;
        int req = n-1;
        int c(0);
        for(int i=1;i<32;i++) {
            if((n & (-n)) != (req & (-req))) c++;
//            req >>= i;
//            n >>= i;
            req/=2; n/=2;
        }
        cout<<c<<endl;
    }
}
 