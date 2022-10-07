class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ans=-1;
        int  sum=accumulate(nums.begin(),nums.end(),0);
        vector<int>pref(nums.size()); pref[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            pref[i]=pref[i-1]+nums[i];
        }
        for(int i=0;i<pref.size();i++){
            int cur=sum-pref[i];
            if(!i )
            {
                if(cur) continue;
                return ans=i;
            }
            else if(cur==pref[i-1] ){
                return ans=i;
            }
        }
        return ans;
    }
};