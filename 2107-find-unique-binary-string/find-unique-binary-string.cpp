class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string result = "";
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i][i] == '0') {
                result += '1';
            } else {
                result += '0';
            }
        }
        return result;
    }
};
