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

bool cmp(pair<pair<int,int>,string>vec1, pair<pair<int,int>,string>vec2) {
    if(vec1.first.first!=vec2.first.first) return vec1.first.first>vec2.first.first;
    else return vec1.first.second<vec2.first.second;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("lego.in","r",stdin);
    int cs; cin>>cs;
    while(cs--) {
        cin>>n;
        vector<pair<pair<int,int>,string>>vec(n);
        for(int i=0;i<n;i++) {
            string x; cin>>x;
            int a,b; cin>>a>>b;
            vec.push_back({{a,b},x});
        }
        sort(vec.begin(),vec.end(),cmp);
        cout<<vec[0].second<<endl;
    }
}

