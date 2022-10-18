#define ll long long
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(),stones.end());
        while(stones.size()>=2){
            ll sz=stones.size();
            if(stones[sz-1]==stones[sz-2]){
                stones.pop_back(); stones.pop_back();
            }
            else{
                ll dec=stones[sz-2]; ll idx=sz-2;
                stones.erase(stones.begin()+idx);
                stones[stones.size()-1]-=dec;
                          sort(stones.begin(),stones.end());
            }
        }
        if(stones.size()) return stones[0];
        return 0;
    }
};