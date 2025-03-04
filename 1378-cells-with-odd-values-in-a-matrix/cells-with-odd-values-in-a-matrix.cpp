class Solution {
	public:
		int oddCells(int m, int n, vector<vector<int>>& ind) {
			vector<vector<int>>mat(m,vector<int>(n,0));
			int count=0;
			for(int k=0;k<ind.size();k++){
				for(int i=0;i<m;i++) mat[i][ind[k][1]]++;
				for(int j=0;j<n;j++) mat[ind[k][0]][j]++;
			}
			for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(mat[i][j]%2!=0)
                    {
                        count++;
                    }
                }
            }
            return count;
		}
	};