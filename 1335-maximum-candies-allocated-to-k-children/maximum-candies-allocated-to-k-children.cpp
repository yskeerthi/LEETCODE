class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long total = 0;
        for (int candy : candies) {
            total+= candy;
        }
        if (total< k) {
            return 0;
        }
        int low = 1;
        int high =*max_element(candies.begin(),candies.end());
        int result = 0;
        while (low <= high) {
            int mid = (low+high)/2;
            long long piles = 0;
            for (int i : candies) {
                piles += i / mid;
            }
            if (piles >= k) {
                result = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return result;
    }
};
