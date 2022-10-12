#define ll long long
vector<ll>dp(50,0);
class Solution {
public:
     ll rec(ll n){
         if(!n || n==1) return dp[n]=n;
         if(dp[n]) return dp[n];
         return dp[n]=rec(n-1)+rec(n-2);

     }
    int fib(int n) {
     //  cout<<fib(n)<<endl;
       return rec(n);
    }
};