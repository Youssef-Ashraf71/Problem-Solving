#define ll long long
ll dp[120][120]={0};
 bool ok(int x, int y,int n, int m) { return x >= 0 && y >= 0 && x < n && y < m; }
class Solution {
public:

    // con:  sum of last left and top of cur
    int uniquePaths(int n, int m) {
     memset(dp,0,sizeof(dp));
       dp[0][0]=1;
       for(ll i=0;i<n;i++){
           for(ll j=0;j<m;j++){
               if(ok(i,j-1,n,m)){
                   dp[i][j]+=dp[i][j-1];
               }
               if(ok(i-1,j,n,m)){
                   dp[i][j]+=dp[i-1][j];
               }
           }
       }
        return dp[n-1][m-1];

    }
};