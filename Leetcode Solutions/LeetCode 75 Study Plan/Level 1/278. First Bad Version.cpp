// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
#define ll long long
class Solution {
public:
    int firstBadVersion(int n) {
        ll l,r; l=1; r=n; bool f=0; ll ans=0;
        while(l<r){
            ll mid=(l+r)/2;
            if(isBadVersion(mid)==true){
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};