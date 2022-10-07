#define ll long long
class Solution {
public:
    int maxProfit(vector<int>& prices) {
    ll n=prices.size(),i;
    ll ans=0;
    ll mi=prices[0];
    for(i=0;i<n;i++){
        mi=min(mi,(ll)prices[i]);
        ans=max(ans,prices[i]-mi);
    }
    return ans;

    }
};