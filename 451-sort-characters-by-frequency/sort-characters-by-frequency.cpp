class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> frequencyMap;
        for (char c : s) {
            frequencyMap[c]++;
        }
        priority_queue<pair<int, char>> maxHeap;
        for (const auto& entry : frequencyMap) {
            maxHeap.push({entry.second, entry.first});
        }
        string res;
        while (!maxHeap.empty()) {
            auto current = maxHeap.top();
            maxHeap.pop();
            res.append(current.first, current.second);
        }

        return res;
    }
};