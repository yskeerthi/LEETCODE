class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        
        vector<int> ans ;
        
        int n = nums.size();
        
		// This unorderd map will store all the numbers from the given vector (nums) 
		
        unordered_map <int,int> mp;
        
		// The following "For" loop help to store all the number in the unordered map
		
        for (int i =0; i<n; i++){
            
            for (int j =0; j<nums[i].size(); j++){
                
                mp[nums[i][j]]++;
            }
        }
        
		// This following "For" loop help to store the common numbers in "ans" vector
		
        for (auto x: mp){
            
            if (x.second % n == 0){
                
                ans.push_back(x.first);
            }
            
        }
        
        sort(ans.begin(),ans.end());
        
        return ans;

    }
};