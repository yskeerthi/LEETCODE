
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
      vector<int>vec(n+1,0);
        int count = 0;
        for (int i = 0; i < n; i++) {
            vec[i+1]=vec[i]+nums[i];
        }
           
           for(int start=0;start<n;start++)
           {
            for(int end=start;end<n;end++)
            {
                if(vec[end+1]-vec[start]==k)
                {
                    count++;
                }
            }
           }
        return count;
    }
};
