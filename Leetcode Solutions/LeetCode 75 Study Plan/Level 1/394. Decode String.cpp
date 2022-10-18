#define ll long long
class Solution {
map<ll,ll>done;
public:

    string omw(string s,ll l,ll r){
       string ans=""; ll cur(0);
       while(l<=r){
        char harf=s[l];
        if(s[l]>='0'&& s[l]<='9') cur=cur*10+(s[l]-'0');
        else if(s[l]=='['){
              string now = omw(s,l+1,done[l]-1);
              for (ll i=0;i<cur;i++) ans += now;
                cur=0; l=done[l];
        }
        else{
            ans+=s[l];
        }
         l++;
       }
       return ans;
    }
    string decodeString(string s) {
        ll n,i,j,cnt=0; n=s.size();
         stack<ll>idx;
        for(i=0;i<n;i++){
            if(s[i]=='[') idx.push(i);
            else if(s[i]==']'){
               ll cur=idx.top();
               done[cur]=i;  idx.pop();
            }
        }
        string ans=omw(s,0,s.size()-1);
        return ans;

    }
};