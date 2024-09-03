class Solution {
public:
    int getLucky(string s, int k) {
        string res = "";
        
        // Convert each character to its corresponding position in the alphabet
        for(int i = 0; i < s.size(); i++) {
            int pos = s[i] - 'a' + 1; // Get the position of the character in the alphabet
            res += to_string(pos); // Append the position as a string to res
        }

        // Sum the digits k times
        while (k--) {
            int sum = 0;
            for(char c : res) {
                sum += c - '0'; // Convert character to digit and add to sum
            }
            res = to_string(sum); // Update res to the sum in string format
        }
        
        return stoi(res); // Convert the final result back to an integer
    }
};
