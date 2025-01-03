class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long int tsum=0;
       long long int sum=0;
       int c=0;
       for(int i=0;i<nums.size();i++)
       {
        tsum+=nums[i];
       }
        for(int i=0; i<nums.size()-1;i++)
       { 
             tsum -=nums[i];
             sum+=nums[i];    
             if(sum>=tsum)
            {
                c++;
            }  
       }
       
       return c;
    }
};