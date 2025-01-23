class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n = grid.size();
       int m = grid[0].size();
       int total = 0;
        vector<int> rowCnt(n, 0), colCnt(m, 0);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (grid[i][j]==1)
                  rowCnt[i]++, 
                  colCnt[j]++;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (grid[i][j]==1 && (rowCnt[i] >=2 || colCnt[j] >=2)) 
                total++;
        return total;
    }
};