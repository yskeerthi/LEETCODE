class Solution {
public:
    double average(vector<int>& salary) {
        int maxi=*max_element(salary.begin(),salary.end());
        int mini=*min_element(salary.begin(),salary.end());
        double sum=0;
        int count=0;
        for(int i=0;i<salary.size();i++)
        {
            if(salary[i]!=maxi && salary[i]!=mini)
            {
                
                sum+=salary[i];
               count++;
                
            }
        }
        return sum/count;
    }
};