class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>res;
        int c,i;
        for(i=0;i<nums.size();i++)
        {
            c=count(nums.begin(),nums.end(),nums[i]); 
             if(c==2)
            {
                res.push_back(nums[i]);
                break;
               
            }  
        }
           
            for(int i=1;i<=nums.size();i++)
            {
                auto it=find(nums.begin(),nums.end(),i);
                if(it==nums.end())
                {
                    res.push_back(i);
                }
            } 
        return res;
    }
};