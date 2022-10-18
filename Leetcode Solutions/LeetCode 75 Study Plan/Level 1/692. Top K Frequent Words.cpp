#define ll long long
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
bool anacmpyad(pair<ll,string>x,pair<ll,string>y){
     if (x.first==y.first) return(x.second<y.second);
     return (x.first>y.first );
}
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
             vector<string>ans;
             map<string,ll>fre;
             for(ll i=0;i<words.size();i++){
               fre[words[i]]++;
             }
            vector<pair<ll,string>>sr;
            for(auto &it:fre){
                pair<ll,string>bld; bld.first=it.second; bld.second=it.first;
                sr.push_back(bld);
            }
            sort(all(sr),anacmpyad);
            for(ll i=0;i<k;i++){
                ans.push_back(sr[i].second);
            }

            return ans;

    }
};