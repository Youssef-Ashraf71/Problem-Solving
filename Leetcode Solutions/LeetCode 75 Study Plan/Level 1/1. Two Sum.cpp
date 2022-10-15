class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) { vector<int>ans; bool ok=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i); ans.push_back(j);
                    ok=1; break;
                }
            }
            if(ok) break;
        }
        return ans;
    }
};