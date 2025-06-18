class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n=nums.size();
        // vector<vector<int>>vec(n/3,vector<int>(3));
        vector<vector<int>>vec;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i+=3)
        {
            if(i+2>=n) return {};
            if(nums[i+2]-nums[i]>k)
            {
                return {};
            }
            vec.push_back({nums[i],nums[i+1],nums[i+2]});
        }
        return vec;
    }
};