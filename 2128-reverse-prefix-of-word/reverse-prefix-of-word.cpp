class Solution {
public:
    string reversePrefix(string word, char ch) {
       
        int index = word.find(ch);
        if (index != std::string::npos) {
            
            int left = 0;
            int right = index;
            while (left < right) {
                std::swap(word[left], word[right]);
                left++;
                right--;
            }
        }
        return word;
    }
};
