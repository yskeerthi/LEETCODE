class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            if (rev > 214748364 || rev < -214748364) return 0;
            int last = x % 10;
            rev = rev * 10 + last;
            x /= 10;
        }
        return rev;
    }

    bool isPalindrome(int x) {
        if (x < 0) 
            return false;  
        return reverse(x) == x;
    }
};
