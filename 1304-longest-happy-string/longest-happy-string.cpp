#include <queue>
#include <string>
using namespace std;

#include <queue>
#include <string>
using namespace std;

class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int, char>> pq;
        if (a > 0) pq.push({a, 'a'});  
        if (b > 0) pq.push({b, 'b'});  
        if (c > 0) pq.push({c, 'c'});
        
        string result = "";
        
        while (!pq.empty()) {
            auto top1 = pq.top(); pq.pop();
            char char1 = top1.second;
            int count1 = top1.first;
            
            int n = result.size();
            if (n >= 2 && result[n - 1] == char1 && result[n - 2] == char1) {
                if (pq.empty()) break;
                
                auto top2 = pq.top(); pq.pop();
                char char2 = top2.second;
                int count2 = top2.first;
                
                result += char2;
                count2--;
                
                if (count2 > 0) pq.push({count2, char2});
                pq.push({count1, char1});
            } else {
                result += char1;
                count1--;
                
                if (count1 > 0) pq.push({count1, char1});
            }
        }
        
        return result;
    }
};
