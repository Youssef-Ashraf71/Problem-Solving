#define ll long long
vector<int>dp((int)1e5,0);
class Solution {
public:

    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        dp[0]=cost[0];  dp[1]=cost[1];
        for(int i=2;i<cost.size();i++){
            dp[i]=min(dp[i-1],dp[i-2])+cost[i];
        }
        return min(dp[n-1],dp[n-2]);
    }
};