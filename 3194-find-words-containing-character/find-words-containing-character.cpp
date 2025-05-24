class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int n = words.size();
        vector<int> res;
        for(int i=0;i<n;i++){
            if(words[i].contains(x))
                res.push_back(i);
        }

        return res;
    }
};