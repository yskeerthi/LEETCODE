class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqMap;
        for (int num : nums) {
            freqMap[num]++;
        }
        priority_queue<pair<int,int>>pq;
        for(const auto& i : freqMap)
        {
            pq.push({i.second,i.first});
        }
        vector<int> res;
        for(int i=0;i<k;i++)
        {
            if(!pq.empty())
            {
                res.push_back(pq.top().second);
                pq.pop();
            }
        }
        return res;
    }
};
