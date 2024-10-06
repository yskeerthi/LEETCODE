#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int count = 0;
        for (int start = 0; start <= s.size() - k; start++) {
            int sub_num = 0;
            for (int end = start; end < start + k; end++) {
                sub_num = sub_num * 10 + (s[end] - '0'); 
            }
            if (sub_num != 0 && num % sub_num == 0) {
                count++;
            }
        }

        return count;
    }
};


