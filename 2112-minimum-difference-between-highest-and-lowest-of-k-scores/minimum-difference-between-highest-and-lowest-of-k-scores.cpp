class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==0) return 0;
        sort(nums.begin(),nums.end());
        int l=0;
        int h=k-1;
        int x;
        int mini=INT_MAX;
        while(h<n){
            int x=nums[h]-nums[l];
            mini=min(x,mini);
            l++;
            h++;
            
        }
        return mini;
    } 
};