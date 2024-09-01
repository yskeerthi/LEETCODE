class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        set<int> uniquePoints; 
        
        for (int i = 0; i < nums.size(); i++) {
            for (int j = nums[i][0]; j <= nums[i][1]; j++) {
                uniquePoints.insert(j); 
            }
        }
     
        return uniquePoints.size();
    }
};
