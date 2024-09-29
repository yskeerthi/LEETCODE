class Solution {
public:
    int findGCD(vector<int>& nums) {
        int x = *min_element(nums.begin(), nums.end());
        int y = *max_element(nums.begin(), nums.end());
        while (y > 0) {
            int temp = y;
            y = x % y;
            x = temp;
        }
        return x; 
    }
};
