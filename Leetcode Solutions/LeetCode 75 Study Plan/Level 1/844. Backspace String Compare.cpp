#define ll long long
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string a,b; a=b="";
        stack<char>x,y;
         for(ll i=0;i<s.size();i++){
             if(s[i]!='#') x.push(s[i]);
             else if(x.size()) x.pop();
         }
           for(ll i=0;i<t.size();i++){
             if(t[i]!='#') y.push(t[i]);
             else if(y.size() )y.pop();
         }
          while(x.size()){
              char cur=x.top();
              a+=cur;
              x.pop();
          }
            while(y.size()){
              char cur=y.top();
              b+=cur;
              y.pop();
          }
          return(a==b);
    }
};