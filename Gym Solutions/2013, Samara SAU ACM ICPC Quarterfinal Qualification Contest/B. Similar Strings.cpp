// Auhtor : Farah Mohamed
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
    map<string,int>mp;
    for(int i=0;i<n;i++) {
        int count[26];
        string x; cin>>x;
        string now = "";
        memset(count,-1,sizeof (count));
        char curr = '0';
        for(int j=0;j<x.size();j++) {
            if(count[x[j]-'a']==-1) {
                curr++;
                count[x[j]-'a'] = (int)curr-'0';
                now+=curr;
            }
            else {
                now+=(count[x[j]-'a']+'0');
            }
        }
        mp[now]++;
    }
    ll ans(0);
    for(auto i : mp) {
        ll num = i.second;
        ans += (1ll*num*(num-1))/2;
    }
    cout<<ans<<endl;
}