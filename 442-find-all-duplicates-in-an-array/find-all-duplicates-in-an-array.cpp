class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> vec;
        for (int num : nums) {
            mp[num]++;
        }
        for (auto &pair : mp) {
            if (pair.second > 1) {
                vec.push_back(pair.first);
            }
        }

        return vec;
    }
};
