class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int rows = grid.size();
        int cols = grid[0].size();
        vector<vector<int>> result(rows, vector<int>(cols));
        vector<int> flat;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                flat.push_back(grid[i][j]);
            }
        }
        int totalElements = rows * cols;
        vector<int> newFlat(totalElements);
        for (int i = 0; i < totalElements; ++i) {
            newFlat[(i + k) % totalElements] = flat[i];
        }
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result[i][j] = newFlat[i * cols + j];
            }
        }
        return result;
      
    }
};
