class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int sumDiff= 0;
        for (int i = 0; i < nums1.size(); ++i) {
            sort(nums1.begin(),nums1.end());
            sort(nums2.begin(),nums2.end());
            sumDiff = (nums2[i] - nums1[i]);
        }

        return sumDiff;
      
    }
};