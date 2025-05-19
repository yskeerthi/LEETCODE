class Solution{
public:
    int findMaxLength(vector<int>&nums){
        unordered_map<int,int>mp;
        mp[0]=-1;
        int z=0,o=0,ans=0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==1)++o;else++z;
            int diff=o-z;
            if(mp.find(diff)!=mp.end())
            ans=max(ans,i-mp[diff]);
            else mp[diff]=i;
        }
        return ans;
    }
};
