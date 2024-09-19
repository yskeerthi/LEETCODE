
class Solution {
public:
    int numDifferentIntegers(string word) {
        // Replace non-digit characters with spaces
        for (int i = 0; i < word.size(); i++) {
            if (!isdigit(word[i])) {
                word[i] = ' ';
            }
        }
        
        stringstream ss(word);
        set<string> uniqueNumbers;
        string number;

        while (ss >> number) {
            number = removeLeadingZeros(number);  // Remove leading zeros
            uniqueNumbers.insert(number);  // Store in set
        }
        
        return uniqueNumbers.size();  // Number of unique integers
    }

private:
    string removeLeadingZeros(const string &number) {
        int start = 0;
        while (start < number.size() && number[start] == '0') {
            start++;
        }
        return start == number.size() ? "0" : number.substr(start);
    }
};
