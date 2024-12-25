class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int j;
        vector<long long int>vec;
        for(const auto& i:matrix)
        {
            for(const auto& j:i)
            {
                vec.push_back(j);
            }
        }
        sort(vec.begin(),vec.end());
        return vec[k-1];
    }
};