// Author : Farah Mohamed
#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
long long mod = 1e9+7;
#define endl '\n'
#define ll long long
#define ull unsigned long long
const int N = 1e5+1;
int vis[N];
int n;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("lego.in","r",stdin);
    cin>>n;
    vector<vector<int>>vec;
    int max1=-1,max2=-1;
    for(int i=0;i<n;i++) {
        int a,b,c; cin>>a>>b>>c;
        vec.push_back({a,b,c});
        sort(vec[i].begin(),vec[i].end());
        max1=max(max1,vec[i][0]);
        max2=max(max2,vec[i][1]);
    }
    int c(0);
    vector<int>ans;
    for(int i=0;i<n;i++) {
        if(vec[i][1]>=max1 && vec[i][2]>=max2) {
            c++;
            ans.push_back(i+1);
        }
    }
    cout<<c<<endl;
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
}