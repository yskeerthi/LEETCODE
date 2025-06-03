class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
unordered_map<int,int>freq;
int j=0;
for(int i=0;i<nums.size();i++)
{
    freq[nums[i]]++;
    if(freq[nums[i]]<=2)
    {
        nums[j++]=nums[i];
    }
}
return j;
    }
};