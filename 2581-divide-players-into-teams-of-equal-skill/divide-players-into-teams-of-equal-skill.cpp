class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        long long final_sum = 0;
        sort(skill.begin(), skill.end());
        int n = skill.size();
        int i = 0;
        int j = n - 1;
        vector<vector<int>> vec;
        
        while (i < j) {
            vec.push_back({skill[i], skill[j]});
            i++;
            j--;
        }
        
        vector<int> sums;
        for (const auto& pair : vec) {
            int sum = pair[0] + pair[1];
            sums.push_back(sum);
        }
        
        for (int k = 1; k < sums.size(); ++k) {
            if (sums[k] != sums[0]) {
                return -1;
            }
        }
        
        for (const auto& pair : vec) {
            final_sum += pair[0] * pair[1];
        }
        
        return final_sum;
    }
};
