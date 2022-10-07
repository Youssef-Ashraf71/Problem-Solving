#define ll long long
#include<map>
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        bool ans=true;
        map<char,ll>vis1,vis2; map<char,char>key;
        for(ll i=0;i<s.size();i++){
            if(!vis1[s[i]] && !vis2[t[i]] ){
                vis1[s[i]]=vis2[t[i]]=1; key[s[i]]=t[i];
            }
            else if(key[s[i]]!=t[i]){
                ans=false;
            }
        }
        return ans;
    }
};