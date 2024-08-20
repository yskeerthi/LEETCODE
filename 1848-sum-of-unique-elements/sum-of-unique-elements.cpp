class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
           int x=count(nums.begin(),nums.end(),nums[i]); 
            if(x==1)
            {
                sum+=nums[i];
            }

        }
        return sum;
        
    }
};