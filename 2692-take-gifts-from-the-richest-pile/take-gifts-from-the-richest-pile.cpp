class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq(gifts.begin(), gifts.end());

        while (k > 0) {
            int x = pq.top();
            pq.pop();
            int x1 = sqrt(x);  
            pq.push(x1);
            k--;
        }

        long long sum = 0;
        while (!pq.empty()) {
            sum += pq.top();
            pq.pop();
        }
        
        return sum;
    }
};
