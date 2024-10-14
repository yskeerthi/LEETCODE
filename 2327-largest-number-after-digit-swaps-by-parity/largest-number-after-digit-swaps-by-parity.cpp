class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int>o;
        priority_queue<int>e;
        string s=to_string(num);
        for(char c:s)
        {
            int digit=c-'0';
            if(digit%2==0)
            {
                e.push(digit);
            }
            else{
             o.push(digit);
 
            }
        }
       string res=" ";
        for(char c:s)
        {
            int digit=c-'0';
            if(digit%2==0)
            {
                res+=to_string(e.top());
                e.pop();
            }
            else{
                res+=to_string(o.top());
                o.pop();
            }
        }
        return stoi(res);
    }
};