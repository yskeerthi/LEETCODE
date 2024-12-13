class Solution {
public:
    long long findScore(std::vector<int>& nums) {
        int n = nums.size();
        priority_queue<pair<int, int>,vector<pair<int, int>>,greater<>> pq;
        vector<bool> marked(n, false); 
        long long score = 0;
        for (int i = 0; i < n; i++) {
            pq.push({nums[i], i});
        }
        while (!pq.empty()) {
            auto [value, index] = pq.top();
            pq.pop();
            if (marked[index]) continue;
            score += value;
            marked[index] = true;
            if (index > 0) marked[index - 1] = true;
            if (index < n - 1) marked[index + 1] = true;
        }
        return score;
    }
};
