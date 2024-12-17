class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> vec(nums.size(),1);
        int prefix=1,post=1;
        for(int i=0;i<nums.size();i++)
        {
            vec[i]=prefix;
            prefix=nums[i]*prefix;
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            vec[i]=vec[i]*post;
            post=post*nums[i];
        }
        return vec;
    }
};
