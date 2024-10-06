class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int count = 0;

        for (int i = 0; i <= s.size()-k; i++) {
            string l = s.substr(i, k);
            int sub_num = stoi(l);

            if (sub_num != 0 && num % sub_num == 0) {
                count++;
            }
        }

        return count;
    }
};