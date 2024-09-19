#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;  // Hash map to store frequency of characters
        
        // First pass: count frequency of each character
        for (char c : s) {
            freq[c]++;
        }
        
        // Second pass: find the first character with frequency 1
        for (int i = 0; i < s.size(); i++) {
            if (freq[s[i]] == 1) {
                return i;  // Return the index of the first unique character
            }
        }
        
        return -1;  // No unique character found
    }
};
