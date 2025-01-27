long long int mod = 1e9 + 7;
class Solution {
public:
    long long BE(long long a , long long b){
        if(b == 0)return 1;

        long long ans = BE(a , b / 2);

        if(b % 2 == 0){
            return (ans * ans) % mod;
        } 
        else return (ans * ans * a) % mod;
    }
    int countGoodNumbers(long long n) {
        long long int c = 1;
        
        long long five_count = ceil(n/2.0);
        long long four_count = n / 2;

        long long ans = BE(5,five_count);

        ans = (ans * BE(4 , four_count)) % mod;

        return ans;
    }
};
