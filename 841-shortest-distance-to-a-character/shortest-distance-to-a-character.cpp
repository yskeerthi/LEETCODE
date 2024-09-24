class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>vec;
        vector<int>res;
        int i;
        for(i=0;i<s.size();i++)
        {
            if(s[i]==c)
            {
                vec.push_back(i);
            }
        }
        for(int j=0; j<s.size();j++)
        {
            vector<int>dummy;
            for (int k=0; k<vec.size(); k++){
                dummy.push_back(abs(j-vec[k]));
            }
            sort(dummy.begin(),dummy.end());
            res.push_back(dummy.front());
        }
        return res;
    }
};