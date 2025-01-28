class Solution {
public:
    int lastRemaining(int n) {
        int head = 1;
        int step = 1;
        int rem = n;
        int left = 1;

        while(rem > 1){
            if(left or rem%2 == 1){
                head += step;
            }

            step = step * 2;
            rem /= 2;
            left = 1 - left;
        }

        return head;
    }
};