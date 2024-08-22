class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
         if(nums.size()<3)
         {
            return -1;
         }
        for(int i=0;i<nums.size();i++)
        {
            sort(nums.begin(),nums.end());
           
        }
       
       return nums[1];

    }
};