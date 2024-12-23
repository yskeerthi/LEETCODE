class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int maxi = *max_element(arr.begin(), arr.end());
        vector<int> vec;
        vector<int> ans;

        // Fill vec with numbers from 1 to maxi
        for (int i = 1; i <= maxi; i++) {
            vec.push_back(i);
        }

        // Find missing numbers
        for (int i = 0; i < vec.size(); i++) {
            if (find(arr.begin(), arr.end(), vec[i]) == arr.end()) {
                ans.push_back(vec[i]);
            }
        }

        // Handle case where missing numbers are fewer than k
        if (ans.size() < k) {
            return maxi + (k - ans.size());
        }

        // Return the k-th missing number
        return ans[k - 1];
    }
};
