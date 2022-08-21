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

int testcases;

void doWork() {
    int n, m;
    cin>>n>>m;
    vector<vector<pair<int, int>>> adj(n+1);
    vector<int> dis(n+1);
    vector<bool> vis(n+1);
    for(int i = 0; i <= n; i++){
        dis[i] = 1e9;
        vis[i] = false;
    }
    while(m--){
        int u, v, c;
        cin>>u>>v>>c;
        adj[u].emplace_back(v, c);
        adj[v].emplace_back(u, c);
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    pq.emplace(0, 1);
    dis[1] = 0;
    vis[1] = true;
    while(!pq.empty()){
        int node, cost;
        tie(cost, node) = pq.top();
        vis[node] = true;
        pq.pop();
        if(dis[node] < cost) continue;
        for(auto j: adj[node]){
            int edgeCost, nxtNode;
            tie(nxtNode, edgeCost) = j;
            if(edgeCost < dis[nxtNode] && !vis[nxtNode]){
                dis[nxtNode] = edgeCost;
                pq.emplace(edgeCost, nxtNode);
            }
        }
    }
    int ans = 0;
    for(int i = 1; i<= n; i++){
        ans = max(ans, dis[i]);
    }
    if(testcases)
        cout<<ans<<el;
    else
        cout<<ans;
}







int main(){
    fast
//    freopen("i.in", "r", stdin);   // for file reading
    //int testcases = 1;
    cin>>testcases;

    while (testcases--) {
        doWork();
    }
}