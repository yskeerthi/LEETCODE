class Solution {
public:
    string reformatNumber(string number) {
        string s;
        string e="";
        for (int i = 0; i < number.size(); i++) {
            if (isdigit(number[i])) {  
                s += number[i];        
            }
        }

        int si=s.size();
        if(si%3==1)
        {
            si-=4;
        }
        for(int j=0;j<si;j++)
        {
            if(j>0 && j%3==0 )
            {
                e+='-';
            }
            e+=s[j];
        }
         int n=s.size();
        if(n%3==1)
        {

            if(n>4) e+='-';
            e += s[n - 4]; // First of the last four s
            e += s[n - 3]; // Second of the last four s
            e += '-';
            e += s[n - 2]; // Third of the last four s
            e += s[n - 1];
        }

        return e;  
    }
};
