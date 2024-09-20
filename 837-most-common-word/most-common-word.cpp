class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {

        for(auto &c : paragraph){
            if(!isalpha(c)) c = ' ';
            else c = tolower(c);
        }

        unordered_map<string, int> map;
        int maxf = 0;
        string res;

        stringstream ss(paragraph);
        string str;
        while(ss >> str){
            if(find(banned.begin(), banned.end(), str) == banned.end()){
                map[str]++;
                if(map[str] > maxf){
                    maxf = map[str];
                    res = str;
                } 
            }
        }

        return res;
    }
};