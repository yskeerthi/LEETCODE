class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
         unordered_map<string, int> m;
        vector<string> res;
        for (int i = 0; i + 9 < s.size(); i++) {
            string sub = s.substr(i, 10);
            m[sub]++;
            if (m[sub] == 2) res.push_back(sub);
        }
        return res;
    }
};