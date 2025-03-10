class Solution {
public:
    std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
        int freq[1001] = {0};
        vector<int> ans;

        for (int num : nums1)
            freq[num]++;

        for (int num : nums2) {
            if (freq[num] != 0) {
                ans.push_back(num);
                freq[num] = 0;
            }
        }

        return ans;
    }
};