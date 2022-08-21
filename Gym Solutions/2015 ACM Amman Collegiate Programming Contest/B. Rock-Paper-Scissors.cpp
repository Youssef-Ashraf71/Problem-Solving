// Author : Ali Tarek
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll   long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0);  cout.tie(0);
#define el '\n'
using namespace std;
using namespace __gnu_pbds;
typedef tree<int,null_type,less<>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
const int MOD = 1e9+7;
const int N = 1e5+7;
vector< pair<int, int> > dxy = {{1, 0}, {-1, 0}, {0, 1}, {0, -1},
                                {-1, 1}, {-1, -1}, {1, 1}, {1, -1}};


void doWork() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> RW(n+1, 0), RL(n+1, 0), SW(n+1, 0), SL(n+1, 0), PW(n+1, 0), PL(n+1, 0);
    for(int i = 0; i < n; i++){
        RW[i+1] = RW[i] + (s[i] == 'S');
        RL[i+1] = RL[i] + (s[i] == 'P');
        SW[i+1] = SW[i] + (s[i] == 'P');
        SL[i+1] = SL[i] + (s[i] == 'R');
        PW[i+1] = PW[i] + (s[i] == 'R');
        PL[i+1] = PL[i] + (s[i] == 'S');
    }
//    for(int i = 1; i<= n; i++){
//        cout<<RW[i]<<" ";
//    }
//    cout<<el;
//    for(int i = 1; i<= n; i++){
//        cout<<RL[i]<<" ";
//    }
//    cout<<el;
//    for(int i = 1; i<= n; i++){
//        cout<<PW[i]<<" ";
//    }
//    cout<<el;
//    for(int i = 1; i<= n; i++){
//        cout<<PL[i]<<" ";
//    }
//    cout<<el;
//    for(int i = 1; i<= n; i++){
//        cout<<SW[i]<<" ";
//    }
//    cout<<el;
//    for(int i = 1; i<= n; i++){
//        cout<<SL[i]<<" ";
//    }
//    cout<<el;
    ll ans = 0;
    for(int rocks = 0; rocks <= n; rocks++){
        for(int paper = 0; paper + rocks <= n; paper++){
            int wins = RW[rocks];
            int loses = RL[rocks];
            wins+=PW[paper+rocks]-PW[rocks];
            loses+=PL[paper+rocks]-PL[rocks];
            int rem = n - (rocks + paper);
            wins+=SW[paper+rocks+rem]-SW[paper+rocks];
            loses+=SL[paper+rocks+rem]-SL[paper+rocks];
            if(wins > loses){
                ans++;
            }
        }
    }
    cout<<ans<<el;
}







int main(){
    fast
//    freopen("i.in", "r", stdin);   // for file reading
    int testcases = 1; cin>>testcases;

    while (testcases--) {
        doWork();
    }
}