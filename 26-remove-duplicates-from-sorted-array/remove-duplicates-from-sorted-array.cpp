class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> freq;
        int c = 0;
        for (int num : nums) {
            if (freq[num] == 0) { 
                nums[c] = num;
                c++;
            }
            freq[num]++;
        }
        return c;
    }
};
