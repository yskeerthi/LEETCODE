class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int min=INT_MAX;
        int i=0,j=nums.size()-1;
        set<double> a;
        while(i<j){
            double div=(nums[j]+nums[i])/2.0;
            cout<<nums[j]<<nums[i]<<div<<endl;
            a.insert(div);
            i++;
            j--;
            if(i>j)
            break;
        }
        return a.size();
    }
};