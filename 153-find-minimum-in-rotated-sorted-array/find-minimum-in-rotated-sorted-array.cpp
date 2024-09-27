class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int res = nums[0];
        int low = 0;
        int high = nums.size() - 1;
        while (low <= high)
        {   
            if (nums[low] < nums[high])
            {
                res = min(res, nums[low]);
                break;
            }
            
            int mid = low + (high - low) / 2;
            res = min(res, nums[mid]);
            if (nums[mid] >= nums[low]) 
            {
                low = mid + 1; 
            }
            else
            {
              high=mid-1;
            }
        }

        return res;
    }
};