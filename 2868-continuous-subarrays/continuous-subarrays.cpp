class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
    long long  n = nums.size();
    long long count = n;
    multiset<int> window; 
    int i = 0;
    for (int j = 0; j < n; ++j) {
        window.insert(nums[j]);
        while (*window.rbegin() - *window.begin() > 2) {
            window.erase(window.find(nums[i]));
            i++;
        }
        count += (j - i);
    }

    return count;
}
  
};