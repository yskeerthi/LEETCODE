class Solution {
public:
    int countValidSelections(vector<int>& nums) {
     int suml=0;
     int sumr=0;
     int sum=0;
     for(int i=0;i<nums.size();i++)
     {
        sum+=nums[i];
     }
     int cnt=0;
     for(int i=0;i<nums.size();i++){
        suml+=nums[i];
        sumr=sum-suml;
     if(nums[i]==0)
     {
        if(suml==sumr)
        {
            cnt+=2;
        }
        else if(suml==sumr-1)
        {
            cnt+=1;
        }
        else if(sumr==suml-1)
        {
            cnt+=1;
        }
     }
     }
     return cnt;
    }
};