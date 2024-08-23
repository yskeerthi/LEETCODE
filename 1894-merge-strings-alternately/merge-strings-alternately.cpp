class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res="";
        int n=word1.size();
        if (word2.size()<n){
            n=word2.size();
        }
        for (int i=0; i<n; i++){
            res+=word1[i];
            res+=word2[i];
        }
        if (word2.size()>word1.size()){
            for (int i=word1.size(); i<word2.size(); i++){
                res+=word2[i];
            }
        }
        else if (word1.size()>word2.size()){
            for (int i=word2.size(); i<word1.size(); i++){
                res+=word1[i];
            }
        }
        return res;
    }
};