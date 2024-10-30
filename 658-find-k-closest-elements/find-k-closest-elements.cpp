class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int lft = 0, rgt = arr.size() - k;
        while (lft < rgt) {
            int mid = lft + (rgt - lft) / 2;
            if (x - arr[mid] > arr[mid + k] - x) {
                lft = mid + 1;
            } else {
                rgt = mid;
            }
        }
        vector<int> sol(arr.begin() + lft, arr.begin() + lft + k);
        return sol;
    }
};