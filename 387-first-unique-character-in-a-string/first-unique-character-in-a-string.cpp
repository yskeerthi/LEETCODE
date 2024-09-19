
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;  // Hash map to store frequency of characters
        vector<int> vec;  // Vector to store indexes of unique characters
        
        // First pass: count frequency of each character
        for (char c : s) {
            freq[c]++;
        }
        
        // Second pass: find characters with frequency 1 and store their indexes
        for (int i = 0; i < s.size(); i++) {
            if (freq[s[i]] == 1) {
                vec.push_back(i);  // Store index of unique character
            }
        }
        
        // Return the first unique character's index, or -1 if none found
        return vec.empty() ? -1 : vec.front();
    }
};
