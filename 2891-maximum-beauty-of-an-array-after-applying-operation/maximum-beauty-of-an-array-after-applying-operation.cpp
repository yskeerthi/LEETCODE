class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        int n = nums.size();
    vector<pair<int,int>>ranges;
    for(int num:nums){
         ranges.push_back({num - k, num + k});
    }
    sort(ranges.begin(),ranges.end());
    int maxb=0;
    int j=0;

    for (int i = 0; i < n; i++) {
      
        while (j < n && ranges[j].first <= ranges[i].second) {
            j++;
        }
        maxb= max(maxb, j - i);
    }
    return maxb;
    }
};