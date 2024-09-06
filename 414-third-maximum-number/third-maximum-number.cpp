class Solution {
public:
    int thirdMax(vector<int>& nums) {
        map<int,int>mp;
        for(auto i :nums)
        {
            mp[i]++;
        }
        map<int,int>::iterator it;
        int cnt=0;
        int res;
        if(mp.size()<3)
        {
            auto it2=mp.rbegin();
            return it2->first;

        }
        
        for(auto it=mp.rbegin();it!=mp.rend();it++)
        {
            
            if(cnt!=2)
            {
                
                cnt++;
            }
            else
            {
                res=it->first;
                break;
                
                
            }
      
        }
        
        return res;
    }
};