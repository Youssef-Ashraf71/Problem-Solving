class Solution {
public:
    string getHint(string secret, string guess) { int cnt=0;
        map<char,int>vis; int eq=0;
        for(int i=0;i<secret.size();i++){
            vis[secret[i]]++;
            if(secret[i]==guess[i]) { eq++;  vis[secret[i]]--;}
        }
        for(int i=0;i<secret.size();i++){

            if(secret[i]!=guess[i]){
               if(vis[guess[i]]){
                   vis[guess[i]]--; cnt++;
               }
            }
        }

        string ans; ans+=to_string(eq);
        ans+='A';   ans+=to_string(cnt); ans+='B';
         return ans;
        }

};