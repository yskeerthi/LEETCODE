class Solution {
public:
    string removeTrailingZeros(string num) {
        int n=num.size();
        while (num.back() == '0') {
            num.replace(n-1,1,"");
            n--;
        }
        return num;
    }
};