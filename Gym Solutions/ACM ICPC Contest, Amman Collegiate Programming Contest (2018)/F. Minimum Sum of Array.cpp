// Author : Farah Mohamed
#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
long long mod = 1e9+7;
#define endl '\n'
#define ll long long
#define ull unsigned long long
const int N = 1e6+3;
int n;
string x;

vector<int>divs[N];

void generate() {
    for(int i=1;i<N;i++) {
        for(int j=i;j<N;j+=i) {
            divs[j].push_back(i);
        }
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("lego.in","r",stdin);
    generate();
    int cs; cin>>cs;
    while(cs--) {
        cin>>n;
        int arr[n];
        map<int,int>mp;
        for(int i=0;i<n;i++) {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        sort(arr,arr+n);
        for(int i=0;i<n;i++) {
            for(int j=0;j<divs[arr[i]].size();j++) {
                if(mp[divs[arr[i]][j]]) {
                    mp[arr[i]]--;
                    arr[i] = divs[arr[i]][j];
                    mp[arr[i]]++;
                    break;
                }
            }
        }
        ll sum(0);
        for(int i=0;i<n;i++) sum+=arr[i];
        cout<<sum<<endl;
    }
}
 