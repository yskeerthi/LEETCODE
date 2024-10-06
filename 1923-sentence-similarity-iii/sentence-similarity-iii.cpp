class Solution {
public:
    bool areSentencesSimilar(string sen1, string sen2) {

        int l1 = sen1.size();
        int l2 = sen2.size();

        if(l1 > l2)
        {
            swap(l1,l2);
            swap(sen1,sen2);
        }

        string w1 ="", w2="";
        sen1 = sen1 + ' ';
        sen2 = sen2 + ' ';
        int i,j,k;
        
        vector<string> wrd;

        for(i=0; i< l2+1; i++)
        {
            if(sen2[i] != ' ') 
            w2 = w2 + sen2[i];

            else
            {
                wrd.push_back(w2);
                w2 ="";
            }
        }
        int l =0, r= wrd.size()-1;
        vector<string> wrd1;
        for(i=0; i< l1+1;i++)
        {
            if(sen1[i] != ' ')
            w1 = w1 + sen1[i];

            else
            {
                wrd1.push_back(w1);
                w1 ="";
            }
        }

        l=0, r = wrd.size() -1;

        int lw1 = 0, rw1 = wrd1.size() -1;
        
        while(l <= r && lw1 <= rw1)
        {
            cout << wrd1[lw1] << " " << wrd1[rw1]<< endl;
            if(wrd1[lw1] == wrd[l]) 
            {
                l++;
                lw1++;
            }
            else if(wrd1[rw1] == wrd[r])
            {
                 r--;
                rw1--;
            }
            else return false;
        }
        return 1;



        

        
    }
};