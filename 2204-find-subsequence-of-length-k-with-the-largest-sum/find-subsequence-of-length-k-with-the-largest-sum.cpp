class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> pq;
        
        for (int i = 0; i < nums.size(); i++) {
            pq.push(make_pair(nums[i], i));
        }

        vector<pair<int, int>> selected; 
        int cnt = 0;
        while (!pq.empty() && cnt != k) {
            int x = pq.top().first;
            int y = pq.top().second;
            selected.push_back({y, x}); 
            pq.pop();
            cnt++;
        }

        
        sort(selected.begin(), selected.end());

        vector<int> res;
        for (auto& p : selected) {
            res.push_back(p.second); 
        }

        return res;
    }
};