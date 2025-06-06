class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        vector<int>v(26,0);
        for(char &ch:s) v[ch-'a']++;

        int count=0;
        while(true){
            for(char &ch:target){
                if(v[ch-'a']==0) 
                return count;
                v[ch-'a']--;
            }
            count++;
        }
        return count;
    }
};