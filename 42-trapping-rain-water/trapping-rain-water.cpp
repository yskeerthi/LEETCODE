class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int totalWater = 0;
        for(int i = 0; i < n; i++) {
            int leftMax = height[i];
            for (int j = 0; j < i; j++) {
                leftMax = max(leftMax, height[j]);
            }
            int rightMax = height[i];
            for(int j = i + 1; j < n; j++) {
                rightMax = max(rightMax, height[j]);
            }
            int waterAtI = min(leftMax, rightMax) - height[i];
            if (waterAtI > 0)
                totalWater += waterAtI;
        }
        return totalWater;
    }
};
