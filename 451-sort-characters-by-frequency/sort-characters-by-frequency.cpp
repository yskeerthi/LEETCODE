class Solution {
public:
    string frequencySort(string s) {
        string res = "";
        unordered_map<char, int> mp;

        for (char ch : s) {
            mp[ch]++;
        }

        vector<pair<int, char>> freqVec;
        for (auto& i : mp) {
            freqVec.push_back({i.second, i.first});
        }

        sort(freqVec.rbegin(), freqVec.rend());

        for (auto& p : freqVec) {
            res.append(p.first, p.second);
        }

        return res;
    }
};

