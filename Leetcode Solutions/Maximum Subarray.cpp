#define ll long long
#include <bits/stdc++.h>
int sum(vector<int>x,ll l, ll r){ ll sum=0;
    for(ll i=l;i<=r;i++){
        sum+=x[i];
    }
    return sum;
}
class Solution {
public:
   ll maxSubArray(vector<int>& nums) {
          ll n,i=0, j = 0, cnt =0;  n=nums.size();
  ll mx=*max_element(nums.begin(),nums.end()); ll tmp=0;
       if(n==1){ return nums[0];}
   for(i=0;i<n;i++){
        tmp+=nums[i];
        if(tmp<0){ tmp=0;}
        else{ mx=max(mx,tmp) ; }
    }
   // cout<<mx<<endl;
    return mx;

}
};