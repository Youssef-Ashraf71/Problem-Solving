#define ll long long
#include <map>
class Solution {
public:
    bool isSubsequence(string s, string t) {
     // using 2 pointers
     ll l,r,cnt=0; l=r=0;
     if(t.size()<s.size()) return 0;
     while(l<s.size() && r<t.size() ){
          if(s[l]==t[r]){
            l++; r++; cnt++;
          }
          else{
              r++;
          }
     }
     if(cnt==s.size()) return 1;
     return 0;

    }
};