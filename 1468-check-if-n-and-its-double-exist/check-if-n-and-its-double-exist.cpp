class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int zeroCount = 0;
        for (int num : arr) {
            if (num == 0) {
                zeroCount++;
            }
        }
        if (zeroCount >= 2) {
            return true;
        }

        for (int i = 0; i < arr.size(); i++) {
            for (int j = 0; j < arr.size(); j++) {
                if (i != j) {
                    if (arr[j] == 2 * arr[i] || (arr[i] % 2 == 0 && arr[j] == arr[i] / 2)) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
