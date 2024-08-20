class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;
        for(int i=0;i<words.size();i++)
        {
            for(int j=0;j<words[i].size();j++)
            {
               if(!allowed.contains(words[i][j]))
               {
                count++;
                break;
               }

            }
        }
        return words.size()-count;
    }
};