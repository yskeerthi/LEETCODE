#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        // Create a frequency map for the licensePlate characters
        unordered_map<char, int> freqMap;
        for (char ch : licensePlate) {
            if (isalpha(ch)) {
                ch = tolower(ch);  // Convert to lowercase
                freqMap[ch]++;
            }
        }

        string result = "";
        for (const string& word : words) {
            unordered_map<char, int> wordFreq;
            
            // Build frequency map for the current word
            for (char ch : word) {
                wordFreq[ch]++;
            }

            // Check if the word satisfies the condition
            bool isValid = true;
            for (const auto& entry : freqMap) {
                if (wordFreq[entry.first] < entry.second) {
                    isValid = false;
                    break;
                }
            }

            // If valid and either no result yet or this word is shorter
            if (isValid && (result == "" || word.size() < result.size())) {
                result = word;
            }
        }
        return result;
    }
};
