#define ll long long
bool vis[500][500];
bool ok(int x, int y,int n, int m) { return ( x >= 0 && y >= 0 && x < n && y < m);  }
ll n,m;
class Solution {
public:
  void dfs(ll x,ll y,vector<vector<char>>& grid){
    vis[x][y]=1;
    if(ok(x,y+1,n,m) && grid[x][y+1]=='1' && !vis[x][y+1] ) dfs(x,y+1,grid);
    if(ok(x,y-1,n,m) && grid[x][y-1]=='1' && !vis[x][y-1] ) dfs(x,y-1,grid);
    if(ok(x+1,y,n,m) && grid[x+1][y]=='1' && !vis[x+1][y] ) dfs(x+1,y,grid);
    if(ok(x-1,y,n,m) && grid[x-1][y]=='1' && !vis[x-1][y] ) dfs(x-1,y,grid);
  }

    int numIslands(vector<vector<char>>& grid) {
        n=grid.size(); m=grid[0].size(); ll ans=0;
        for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            if(grid[i][j]=='1' && !vis[i][j]){
               ans++; dfs(i,j,grid);
            }
        }
    }
    memset(vis,0,sizeof(vis));
    return ans;
    }
};