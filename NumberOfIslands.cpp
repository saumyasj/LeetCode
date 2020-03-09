class Solution {
public:
    int numIslands(vector<vector<char>>& grid)
    {
        int count=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    count+=1;
                    callbfs(grid,i,j);
                }
            }
        }
        return count;
    }
    
    int callbfs(vector<vector<char>>& grid,int  i,int j)
    {
        if(i<0 || i>grid.size() ||j<0||j>grid[i].size()||grid[i][j]=='0') return 0;
        grid[i][j]='0';
        callbfs(grid,i-1,j);//up
        callbfs(grid,i+1,j);//down
        callbfs(grid,i,j+1);//right
        callbfs(grid,i,j-1);//left
        return 0;
    }
};
