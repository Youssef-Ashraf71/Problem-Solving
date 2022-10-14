#define ll long long
class Solution {
public:
 vector<int> findAnagrams(string s, string p) {
     ll n,i,j,cnt=0,l,r; l=0; r=0;
      map<char,ll>vis,freq; vector<int>ans;
      for(i=0;i<p.size();i++) vis[p[i]]++,freq[s[i]]++;
        for(i=0;i+p.size()<=s.size();i++){
            bool same=1;
            for(char z='a';z<='z';z++){
                if(vis[z]!=freq[z]) same=0;
            }
            if(same){ ans.push_back(i); }
            freq[s[i]]--; freq[s[i+p.size()]]++;
        }
   return ans;
      }


};