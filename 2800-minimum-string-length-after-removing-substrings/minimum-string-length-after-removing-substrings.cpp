class Solution {
public:
    int minLength(string s) {
        
             vector<char> vec;
    for (char ch : s) {
        if (!vec.empty() && ((vec.back() == 'A' && ch == 'B') || (vec.back() == 'C' && ch == 'D'))) {
            vec.pop_back(); 
        } else {
            vec.push_back(ch); 
        }
    }
    return vec.size();


    }
};