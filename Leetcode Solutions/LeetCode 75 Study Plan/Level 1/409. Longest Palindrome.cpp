#include<map>
#define ll long long
class Solution {
public:
    int longestPalindrome(string s) {
           map<char,ll>vis; ll ans=0;
           for(ll i=0;i<s.size();i++){
                vis[s[i]]++;
           }
       bool f=0;
      for(auto &it:vis){
          if(!(it.second & 1)){
              ans+=it.second;
          }
          else{
              if(!f){
                  ans+=it.second; f=1;
              }
              else{
                  ans+=it.second-1;
              }
          }
      }
   return ans;


    }
};