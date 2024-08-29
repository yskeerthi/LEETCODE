class Solution {
public:
    std::string sortSentence(std::string s) {
        std::vector<std::string> words; // Vector to store the words
        std::string word; // Temporary variable to hold each word
        std::stringstream ss(s); // Create a stringstream from the input string
        
        while (ss >> word) { // Extract each word
            words.push_back(word); // Add the word to the vector
        }

        // Sort words based on the last digit
        std::sort(words.begin(), words.end(), [](const std::string& a, const std::string& b) {
            // Extract last digit (convert from char to int)
            int digitA = a.back() - '0';
            int digitB = b.back() - '0';
            return digitA < digitB; // Sort in ascending order of digits
        });

        // Remove digits from the words and form the result sentence
        std::string result;
        for (const std::string& w : words) {
            result += w.substr(0, w.size() - 1) + " "; 
        }

        // Remove trailing space and return
        if (!result.empty()) {
            result.pop_back();
        }
        
        return result;
    }
};