class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int lens1 = s1.size();
        int lens2 = s2.size();

        // Early exit if s1 is longer than s2
        if (lens1 > lens2) {
            return false;
        }

        vector<int> s1Count(26, 0);
        vector<int> windowCount(26, 0);

        // Count characters in s1
        for (char c : s1) {
            s1Count[c - 'a']++;
        }

        // Count characters in the initial window of s2
        for (int i = 0; i < lens1; i++) {
            windowCount[s2[i] - 'a']++;
        }

        // Check if the initial window matches s1
        if (s1Count == windowCount) {
            return true;
        }

        // Slide the window across s2
        for (int i = lens1; i < lens2; i++) {
            // Remove the character going out of the window
            windowCount[s2[i - lens1] - 'a']--;
            // Add the new character coming into the window
            windowCount[s2[i] - 'a']++;

            // Compare counts after updating
            if (s1Count == windowCount) {
                return true;
            }
        }

        // If no permutation is found, return false
        return false;
    }
};
