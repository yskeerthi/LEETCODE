class Solution {
    vector<int> prefixSum, postfixSum;
public:
    int pivotIndex(vector<int>& nums) {
        prefixSum.resize(nums.size()+1, 0);
        postfixSum.resize(nums.size()+1, 0);
        for (int i=1;i<=nums.size();i++) 
            prefixSum[i] = prefixSum[i-1] + nums[i-1];
        for (int i=nums.size()-1;i>=0;i--) 
            postfixSum[i] = postfixSum[i+1] + nums[i];
        for (int i=0;i<nums.size();i++) 
            if  (prefixSum[i] == postfixSum[i+1])
            {
                return i;
            }
        return -1;
    }
};