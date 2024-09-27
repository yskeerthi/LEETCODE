class Solution {
public:
    int findPeakElement(vector<int>& nums) {
           auto maxi=max_element(nums.begin(),nums.end());
           
           
        return distance(nums.begin(), maxi);
    }
};