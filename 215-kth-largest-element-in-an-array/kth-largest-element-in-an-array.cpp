class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        multiset<int, greater<int>> s(nums.begin(), nums.end()); 
        auto it = s.begin(); 
        advance(it, k - 1);  

        return *it;
        
    }
};
