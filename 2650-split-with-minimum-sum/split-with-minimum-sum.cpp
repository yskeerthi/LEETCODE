class Solution {
public:
    int splitNum(int num) {
        string n = to_string(num);
        sort(n.begin(), n.end());  
        string first_num = "", second_num = "";
        for(int i = 0; i < n.size(); i++) {
            if (i % 2 == 0) {
                first_num += n[i];  // Even index goes to first_num
            } else {
                second_num += n[i];  // Odd index goes to second_num
            }
        }
        return stoi(first_num) + stoi(second_num);
    }
};
