class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for (int i = 0; i < stones.size(); i++) {
            pq.push(stones[i]);
        }
        while (pq.size() > 1) {
            int maxi1 = pq.top(); pq.pop();  
            int maxi2 = pq.top(); pq.pop(); 

            if (maxi1 != maxi2) {
                pq.push(maxi1-maxi2);
            }
        }
        return pq.empty() ? 0 : pq.top();
    }
};
