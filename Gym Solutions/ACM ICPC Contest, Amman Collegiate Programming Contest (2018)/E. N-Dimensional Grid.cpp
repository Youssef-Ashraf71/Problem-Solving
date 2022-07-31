// Authors : Farah Mohamed - Ali Tarek
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

int pre[N];


int mul(int a, int b){
    a%=MOD;
    b%=MOD;
    return (1ll * a * b)%MOD;
}


int fastPow(int b, int p){
    if(b == 1 || p == 0){
        return 1;
    }
    int halfPower = fastPow(b, p/2);
    int ans = mul(halfPower, halfPower);
    if(p&1){
        ans = mul(ans, b);
    }
    return ans;
}

int modInv(int a){
    return fastPow(a, MOD-2);
}

void calc(){
    for(int i = 1; i < N; i++){
        pre[i] = modInv(i);
    }
}

int add(int a, int b){
    a%=MOD;
    b%=MOD;
    return (a+b)%MOD;
}

void doWork() {
    int n;
    cin>>n;
    int arr[n];
    int mult = 1;
    int ans = 0;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        mult = mul(arr[i], mult);
    }
    for(int i=0;i<n;i++) {
        int temp = mul(mult, pre[arr[i]]);
        temp = mul(temp, (arr[i]-1));
        ans = add(ans, temp);
        ans %= MOD;
    }
    cout<<ans<<endl;
}







int main(){
    fast
//    freopen("i.in", "r", stdin);   // for file reading
    calc();
    int testcases = 1; cin>>testcases;

    while (testcases--) {
        doWork();
    }
}