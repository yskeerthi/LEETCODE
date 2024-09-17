class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> word_count;
        vector<string> result;
        string word;
        for (char c : s1) {
            if (c == ' ') {
                if (!word.empty()) {
                    word_count[word]++;
                    word.clear();
                }
            } else {
                word += c;
            }
        }
        if (!word.empty()) {
            word_count[word]++;
        }
        word.clear();

        for(char c: s2){
            if(c== ' '){
                if(!word.empty()){
                    word_count[word]++;
                    word.clear();
                }
            }else{
                word += c;
            }
        }
        if(!word.empty()){
            word_count[word]++;
        }
        
        
        for (const auto& e : word_count) {
            if (e.second == 1) {
                result.push_back(e.first);
            }
        }
        
        return result;
    }
};