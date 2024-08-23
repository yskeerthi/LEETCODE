class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>v;
        vector<int>res;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0; j<grid[i].size(); j++){
                v.push_back(grid[i][j]);
            }
        }
        for(int j=0;j<v.size();j++)
        {
            int c=count(v.begin(),v.end(),v[j]);
            if(c==2)
            {
                res.push_back(v[j]);
                break;
            }
        }
        sort(v.begin(),v.end());
        for(int k=1;k<=v.size();k++)
        {
            int cnt= count(v.begin(),v.end(),k);
            if(cnt==0){
                res.push_back(k);
                break;
            }
        }
        
        return res;
    }
};