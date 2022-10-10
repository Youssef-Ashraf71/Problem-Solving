#define ll long long
class Solution {
public:
    int search(vector<int>& nums, int target) {
       ll l,r; l=0; r=nums.size()-1; ll mid;
       while(l<=r){
            mid=(l+r)/2;
           if(nums[mid]==target) return mid;
           if(nums[mid]>target) r=mid-1;
           else l=mid+1;
       }
       return mid=-1;
    }
};