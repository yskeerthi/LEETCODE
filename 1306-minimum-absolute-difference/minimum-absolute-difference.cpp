#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> minimumAbsDifference(std::vector<int>& arr) {
        // Step 1: Sort the array
        std::sort(arr.begin(), arr.end());
        
        std::vector<std::vector<int>> result;
        int minDiff = INT_MAX;

        // Step 2: Find the minimum difference between consecutive elements
        for (int i = 0; i < arr.size() - 1; ++i) {
            int diff = arr[i + 1] - arr[i];
            if (diff < minDiff) {
                minDiff = diff;
                result.clear();  // Clear previous pairs if a new minimum is found
            }
            if (diff == minDiff) {
                result.push_back({arr[i], arr[i + 1]});
            }
        }

        // Step 3: Return the pairs with the minimum difference
        return result;
    }
};
