class Solution {
public:
    int maxPower(string s) {
        if(s.length()==1)
        {
            return 1;
        }
        int count = 1 ; 
        int maxi = 0;
        for(int i = 1 ; i < s.length(); i++){
            if(s[i]==s[i-1]){
                count++ ; 
            }
            else{
                maxi = max(count , maxi );
                count = 1;
            }
        }
        return (count < maxi ) ? maxi : count;
    }
};