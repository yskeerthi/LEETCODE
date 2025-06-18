class Solution {
public:
    string resultingString(string s) {
        string k = s;
        int i = 0;
        while (i <(int)k.size() - 1) {
            char a = k[i];
            char b = k[i + 1];
            if(abs(a - b) == 1 || abs(a - b) == 25) {
                k.erase(i, 2);
                if (i > 0) i--;
            } 
            else{
                i++;
            }
        }
        return k;
    }
};
