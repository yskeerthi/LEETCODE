class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string>chartoword;
        map<string,char>wordtochar;
        stringstream ss(s);
        vector<string>words;
        string word;
       while(ss>>word)
       {
        words.push_back(word);
       }
       if(pattern.size()!=words.size())
       {
        return false;
       }
       for(int i=0;i<pattern.size();i++)
       {
        char c =pattern[i];
        string w=words[i];
        if(chartoword.count(c))
        {
            if(chartoword[c]!=w)
            {
                return false;
            }
        }
        else{
            if(wordtochar.count(w))
            {
                if(wordtochar.count(w))
                {
                    if(wordtochar[w]!=c)
                    {
                        return false;
                    }
                }
            }
        }
        chartoword[c]=w;
        wordtochar[w]=c; 
            }
        return true; 
}
};
