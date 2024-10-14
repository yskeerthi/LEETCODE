class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<long long int>pq;
        long long sum=0;
        int i;
        for( i=0;i<nums.size();i++)
        {
           pq.push(nums[i]);
           
        }
        while(k!=0)
           {
                long long maxi=pq.top();
                pq.pop();
                sum+=maxi;
                pq.push(ceil(maxi/3.0));
                k--;
           }
        return sum;
    }
};