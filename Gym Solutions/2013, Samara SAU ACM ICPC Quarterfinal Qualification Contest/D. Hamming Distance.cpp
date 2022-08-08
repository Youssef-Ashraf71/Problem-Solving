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
//    int cs; cin>>cs;
//    while(cs--) {
//
//    }
     cin>>n;
     string a,b,c; cin>>a>>b>>c;
     int count=0;
     string ans="";
     for(int i=0;i<n;i++) {
         int arr[26];
         memset(arr,0,sizeof (arr));
         arr[a[i]-'a']++; arr[b[i]-'a']++; arr[c[i]-'a']++;
         int mx = max(arr[a[i]-'a'],(arr[b[i]-'a'],arr[c[i]-'a']));
         if(mx==arr[a[i]-'a']) ans+=a[i];
         else if(mx==arr[b[i]-'a']) ans+=b[i];
         else ans+=c[i];
     }
     cout<<ans;
}