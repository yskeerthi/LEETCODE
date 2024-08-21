class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int maxSide = 0;
        int count = 0;

        for (int i = 0; i < rectangles.size(); i++) {
            int side = min(rectangles[i][0], rectangles[i][1]);

            if (side > maxSide) {
                maxSide = side;
                count = 1;
            } else if (side == maxSide) {
                count++;
            }
        }

        return count;
    }
};
