class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";

        int n1 = num1.size();
        int n2 = num2.size();
        vector<int> result(n1 + n2, 0);

        // Perform multiplication
        for (int i = n1 - 1; i >= 0; i--) {
            for (int j = n2 - 1; j >= 0; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = result[i + j + 1] + mul;
                
                result[i + j + 1] = sum % 10;
                result[i + j] += sum / 10;
            }
        }

        // Convert the result to a string, skipping leading zeros
        string ans = "";
        for (int i = 0; i < result.size(); i++) {
            if (!(ans.empty() && result[i] == 0)) {
                ans += to_string(result[i]);
            }
        }

        return ans.empty() ? "0" : ans;
    }
};
