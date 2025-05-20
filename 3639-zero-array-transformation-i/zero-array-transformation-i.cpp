class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
      int n=nums.size();
        vector<int>dif(n+1,0);
        for(auto q:queries)
            {
                int l=q[0];
                int r=q[1];
                dif[l]+=1;
                if(r+1<n) dif[r+1]-=1;
                
            }
        int c=0;
        for(int i=0;i<n;i++)
            {
                c+=dif[i];
                if(c<nums[i]) return false;
            }
        return true;
    }
};
