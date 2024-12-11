class Solution {
public:
    int findMinMoves(vector<int>& ms) {
        int n = ms.size();
        int sum = accumulate(ms.begin(), ms.end(), 0);
        if(sum % n)return -1;
        int t = sum / n;
        int ans = 0, toRight = 0;
        for(int &it : ms){
            toRight = toRight + it - t;
            ans = max(ans, max(abs(toRight), it - t));
        }
        return ans;
    }
};