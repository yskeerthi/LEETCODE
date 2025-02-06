#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int tupleSameProduct(vector<int>& n) {
        unordered_map<int, int> pCount;
        int len = n.size();
        
        for (int i = 0; i < len; i++) {
            for (int j = i + 1; j < len; j++) {
                int a = n[i];
                int b = n[j];
                int p = a * b;
                pCount[p]++;
            }
        }
        
        int cnt = 0;
        for (auto& e : pCount) {
            int k = e.second;
            if (k > 1) {
                cnt += (k * (k - 1) / 2) * 8;
            }
        }
        
        return cnt;
    }
};
