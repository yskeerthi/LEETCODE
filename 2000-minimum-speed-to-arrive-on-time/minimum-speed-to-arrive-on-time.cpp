
class Solution {
public:
    int minSpeedOnTime(std::vector<int>& dist, double hour) {
        int n = dist.size();
        if (n - 1 >= hour) return -1;
        
        int left = 1, right = 1e7;
        while (left < right) {
            int mid = (left + right) / 2;
            double time = 0.0;
            
            for (int i = 0; i < n - 1; i++) {
                time += std::ceil((double)dist[i] / mid);
            }
            time += (double)dist[n - 1] / mid;
            
            if (time <= hour) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};
