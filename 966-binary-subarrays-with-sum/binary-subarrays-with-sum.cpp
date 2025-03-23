class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int tc=0;
        int currsum=0;
        unordered_map<int,int>freq;
        for(int num:nums)
        {
            currsum+=num;
            if(currsum==goal)
            {
                tc++;
            }
            if(freq.find(currsum-goal)!=freq.end())
            {
                tc+=freq[currsum-goal];
            }
            freq[currsum]++;
        }
        return tc;
    }
};