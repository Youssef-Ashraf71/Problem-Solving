#define ll long long
class Solution {
public:
    int characterReplacement(string s, int k) {
    ll  n=s.size(),i,j,cnt=0;
    ll ans=0;
     char mxc='a'; ll mx=0;   map<ll,ll>vis;
       i=0;
        for(j=0;j<n;j++){
            vis[s[j]]++;
             for(char z='A';z<='Z';z++){
                if(vis[z]>mx){
                    mx=vis[z]; mxc=z;
                }
            }
            ll cur=(j-i+1)-mx;
            while(cur>k){
             vis[s[i]]--; i++;
              for(char z='A';z<='Z';z++){
                if(vis[z]>mx){
                    mx=vis[z]; mxc=z;
                }
            }
               cur=(j-i+1)-mx;
            }
              ans=max(ans,j-i+1);
         }

   return ans;

    }

};