class Solution {
public:
    long long flowerGame(int n, int m) {
        long long int o1=(n+1)/2;
        long long int e1 = n / 2; 
        long long int o2 = (m + 1) / 2;
        long long int e2 = m / 2;
        return (o1 * e2) + (o2 * e1); 
    }
};