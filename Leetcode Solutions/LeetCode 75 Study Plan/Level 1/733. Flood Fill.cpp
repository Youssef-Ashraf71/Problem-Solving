#define ll long long
const int dx[] = { 1, -1, 0, 0 };
const int dy[] = { 0, 0, 1, -1 };
bool vis[100][100]={0};
class Solution {
public:
 bool ok(int x, int y,int n, int m) { return x >= 0 && y >= 0 && x < n && y < m; }
 ll n,m;  ll old;
void dfs(ll x,ll y,ll col,vector<vector<int>>& image){
    vis[x][y]=1;
    image[x][y]=col;
    for(ll i=0;i<4;i++){
        ll nx=x+dx[i]; ll ny=y+dy[i];
        if(ok(nx,ny,m,n) && !vis[nx][ny] ){
          if(image[nx][ny]==old)  dfs(nx,ny,col,image);
        }
    }
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        m=image.size(); n=image[0].size();
       old=image[sr][sc];
        dfs(sr,sc,color,image);
        memset(vis,0,sizeof(vis));
        return image;
    }
};