class Solution {
public:
    //grid problem involving dp this is top bottom approach....
   /* int minsum(vector<vector<int>>&grid,int i,int j){
        if(i==grid.size()-1&&j==grid[0].size()-1){
        return grid[i][j];
        
        }
        int right=INT_MAX,down=INT_MAX;
        //first case when out of the boundaries thus we can move right as well down
        if (i < grid.size() - 1 && j < grid[0].size() - 1) {
            right= grid[i][j] + minsum(grid, i, j + 1);
            down = grid[i][j] + minsum(grid, i + 1, j);
        }
        //in this case only down we can move...
        else if (i < grid.size() - 1) {
            down = grid[i][j] + minsum(grid, i + 1, j);
            
        } //in this case only right we can move
        else if (j < grid[0].size() - 1) {
            right = grid[i][j] + minsum(grid, i, j + 1);
        }
        return min(right,down);
        
        
        
    }*/
    //below is bottom to top approach....
    int minPathSum(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();

        // Initialize the dp table with the same dimensions as the grid
        vector<vector<int>> dp(r, vector<int>(c, 0));

        dp[r-1][c-1] = grid[r -1][c-1 ];
        for(int i=r-1;i>=0;i--){
            for(int j=c-1;j>=0;j--){
                if(i<r-1&&j<c-1){
                    dp[i][j]=grid[i][j]+min(dp[i+1][j],dp[i][j+1]);
                }
                else if(i<r-1){
                    dp[i][j]=grid[i][j]+dp[i+1][j];
                }
                else if(j<c-1){
                    dp[i][j]=grid[i][j]+dp[i][j+1];
                }
               
            }
            
            
        }
        
        
        
        
        return dp[0][0];
        
    }
};