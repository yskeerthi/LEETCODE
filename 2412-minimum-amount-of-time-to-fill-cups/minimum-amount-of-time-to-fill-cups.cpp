class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int> pq;
        for (int x : amount) {
            if (x > 0) {
                pq.push(x);
            }
        }
        int steps = 0;

        while (pq.size() > 1) {
            int x1 = pq.top();
            pq.pop();
            int x2 = pq.top();
            pq.pop();

            x1--;
            x2--;
            steps++;

            if (x1 > 0) pq.push(x1);
            if (x2 > 0) pq.push(x2);
        }

        if (!pq.empty()) {
            steps += pq.top();
        }

        return steps;
    }
};
