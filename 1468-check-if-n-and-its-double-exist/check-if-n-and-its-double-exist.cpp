class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int i;
        for(i = 0; i < arr.size(); i++) {
            for(int j = i + 1; j < arr.size(); j++) {
                if(  i!=j && arr[j] == 2*arr[i] || arr[i]==2*arr[j]) {
                    return true;
                }
            }
        }
        return false;
    }
};
