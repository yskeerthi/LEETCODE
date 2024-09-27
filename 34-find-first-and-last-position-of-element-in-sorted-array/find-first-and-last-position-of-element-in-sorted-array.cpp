class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // int low,mid,high;
        // int mid=(low+high)/2;
        // while(low<=high)
        // {
        //   if(mid==target)
        //   {

        //   }
        // }
        vector<int>vec(2, -1);
        //int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                vec[0]=i;
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]==target)
            {
                vec[1]=i;
                break;
            }
        }
        
        return vec;
       
    }
};

















