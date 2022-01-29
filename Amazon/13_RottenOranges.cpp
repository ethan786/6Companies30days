// Question Link- https://leetcode.com/problems/rotting-oranges/

// Question - Every minute, any fresh orange that is 4-directionally adjacent to a rotten orange becomes rotten. Return the minimum number of minutes that must elapse until no cell has a fresh orange. If this is impossible, return -1.

// Solution -

void search(vector<vector<int>> &vis,vector<vector<int>>& grid,int i,int j,int cur)
    {
        if(i<0 || i>=vis.size() || j<0 || j>=vis[0].size() || grid[i][j]==0 || grid[i][j]==2 || vis[i][j]<cur) 
            return ;
        vis[i][j]=cur;
        search(vis,grid,i+1,j,cur+1);
        search(vis,grid,i,j+1,cur+1);
        search(vis,grid,i-1,j,cur+1);
        search(vis,grid,i,j-1,cur+1); 
                    
    }
    
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        int ans=0;
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                    vis[i][j]=INT_MAX;
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    
        search(vis,grid,i+1,j,1);
        search(vis,grid,i,j+1,1);
        search(vis,grid,i-1,j,1);
        search(vis,grid,i,j-1,1); 
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1 && vis[i][j]==INT_MAX)
                    return -1;
               if(vis[i][j]!=0)
                   ans=max(ans,vis[i][j]);
            }
        }
        return ans;
    }
