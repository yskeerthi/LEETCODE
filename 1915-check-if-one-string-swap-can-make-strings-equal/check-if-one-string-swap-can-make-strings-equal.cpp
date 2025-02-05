class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {

        int count = 0;
        vector<int> ind;
        for(int i = 0;i<s1.length();i++){
            if(s1[i] != s2[i]){
                ind.push_back(i);
                count++;
            }
            if(count>2){
                return false;
            }
        }
        if(count == 0){
            return true;
        }
        if(count ==2){
            swap(s2[ind[0]],s2[ind[1]]);
            if( s1==s2)
            return true;
        } 
        return false;       
    }
};