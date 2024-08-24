class Solution {
public:
    int balancedStringSplit(string s) {
        int k = 0;   
        int count = 0; 
        
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'L') {
                k++;  
            } else {
                k--;  
            }
            
            if(k == 0) {
                count++;
            }
        }
        
        return count; 
    }
};
