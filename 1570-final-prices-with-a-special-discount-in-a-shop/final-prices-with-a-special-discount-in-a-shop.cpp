class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> res(n);

        for (int i = 0; i < n; i++) {
            int discount = 0;
            for (int j = i + 1; j < n; j++) {
                if (prices[j] <= prices[i]) {
                    discount = prices[j];
                    break;
                }
            }
            res[i] = prices[i] - discount;
        }

        return res;
    }
};