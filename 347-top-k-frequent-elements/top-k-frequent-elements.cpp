class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int, int> freqMap; // Step 1: Map to store frequencies

        // Count the frequency of each element
        for (int num : nums) {
            freqMap[num]++;
        }

        // Use a vector of pairs to store frequency and element
        vector<pair<int, int>> freqList(freqMap.begin(), freqMap.end());

        // Sort the vector of pairs based on frequency in descending order
        sort(freqList.begin(), freqList.end(), [](pair<int, int>& a, pair<int, int>& b) {
            return a.second > b.second;
        });

        // Collect the top k elements
        for (int i = 0; i < k; i++) {
            res.push_back(freqList[i].first);
        }

        return res;
    }
};
