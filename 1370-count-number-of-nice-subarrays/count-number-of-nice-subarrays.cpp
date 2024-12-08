#include <vector>
using namespace std;

class Solution {
public:
    int countAtMostKOddNumbers(vector<int>& nums, int k) {
        int left = 0;
        int oddCount = 0;
        int count = 0;

        for (int right = 0; right < nums.size(); ++right) {
            if (nums[right] % 2 != 0) {
                oddCount++;
            }

            while (oddCount > k) {
                if (nums[left] % 2 != 0) {
                    oddCount--;
                }
                left++;
            }

            count += (right - left + 1);
        }

        return count;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return countAtMostKOddNumbers(nums, k) - countAtMostKOddNumbers(nums, k - 1);
    }
};
