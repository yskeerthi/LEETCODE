class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // Use a set to store unique elements and automatically sort them
        set<int> val(nums.begin(), nums.end());
        
        // If the set has less than 3 elements, return the maximum (last element)
        if (val.size() < 3) {
            return *val.rbegin();  // Access the largest element
        }

        // Otherwise, return the third maximum
        auto it = val.rbegin(); // Reverse iterator to start from the largest
        advance(it, 2);  // Move iterator to the third largest element
        return *it;
    }
};
