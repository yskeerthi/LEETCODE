// class Solution {
// public:
//     int minimumOperations(vector<int>& nums) {
//         priority_queue <int, vector<int>, greater<int> > pq; 
//         for(int x: nums)
//         {
//             pq.push(x);
//         }
//         int min=pq.top();
//         vector<int>vec;
//         int j;
//         for(j=0;j<nums.size();j++)
//         {

//             vec.push_back(nums[i]-min);
//             k++;
//         }
//          for(int i=0;i<vec.size();i++)
//         {
//             int c=count(vec.begin,vec.end(),vec[i]==0);
//              if(c==vec.size())
//             {
//                 return 0;
//             }
//         }
//         return k;
        
//     }
// };
class Solution {
public:
    int minimumOperations(std::vector<int>& nums) {
       unordered_set<int> uniqueNums(nums.begin(), nums.end());
        uniqueNums.erase(0);
        return uniqueNums.size();
    }
};
