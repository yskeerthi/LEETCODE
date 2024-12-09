class Solution {
public:
    bool isCovered(vector<vector<int>>& arr, int left, int right) {
       unordered_map<int,bool>mp;
       for(int i=0;i<arr.size();i++)
       {
         int start=arr[i][0];
         int end=arr[i][1];
         for(int j=start;j<=end;j++)
         {
            mp[j]=true;
         }
       }
       for(int i=left;i<=right;i++)
       {
         if(mp[i]!=true)
         {
            return false;
         }
       }
       return true;
       
    }
};