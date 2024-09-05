class Solution {
public:
    double average(vector<int>& salary) {
        int n=salary.size();
        sort(salary.begin(),salary.end());
        salary.erase(salary.begin());
        salary.erase(salary.end());
        long long int sum=accumulate(salary.begin(),salary.end(),0);
        double avg=((sum)/double(salary.size()));
        return avg;
        

    }

};
