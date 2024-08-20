class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        int p1=nums[n]*nums[n-1];
        int p2=nums[0]*nums[1];
        return p1-p2;
    }
};