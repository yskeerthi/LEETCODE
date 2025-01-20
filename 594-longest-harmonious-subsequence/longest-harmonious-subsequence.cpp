class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int>mp;
        for(auto i : nums)
        {
            mp[i]++;
        }
        int maxi=0;
        for(auto &[key,count]:mp)
        {
            if(mp.find(key+1)!=mp.end())
            {
                maxi=max(count+mp[key+1],maxi);
            }
        }
        return maxi;
    }
};