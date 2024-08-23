class Solution {
public:
    string reversePrefix(string word, char ch) {
       
        int index = word.find(ch);
        if (index != string::npos) {
            
            int left = 0;
            int right = index;
            while (left < right) {
                swap(word[left], word[right]);
                left++;
                right--;
            }
        }
        return word;
    }
};
