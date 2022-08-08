// Author : Ali Tarek
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define ll   long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0);  cout.tie(0);
#define el '\n'

using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

const ll N = 1e5 + 1;
const int MOD = 998244353;
int dx[] = {1, -1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, 1, -1, 1, -1};


void doWork() {
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> v(n), pre(n);
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        pre[i] = v[i];
        if (i) {
            pre[i] += pre[i - 1];
        }
    }
    map<ll, int> mp;
    for (int i = n - 1; i >= 0; i--) {
        if (pre[i] == k) {
            ans++;
        }
        ll num = k + pre[i];
        ans += mp[num];
        mp[pre[i]]++;
    }
    cout << ans;

}


int main() {
    fast
//    freopen("i.in", "r", stdin);   // for file reading
    int testcases = 1;
//    cin >> testcases;
    while (testcases--) {
        doWork();
    }
}