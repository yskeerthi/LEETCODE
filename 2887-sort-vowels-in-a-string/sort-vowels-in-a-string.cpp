class Solution {
private:
    bool is_Vowel(char c)
    {
        if(c=='a'|| c=='e'||c=='i'||c=='o'||c=='u'
        ||c=='A'||c=='E'||c=='I'||c=='O' ||c=='U')
        {
            return true;    
        }
        else
        {
            return false;
        }
    
    }
public:
    string sortVowels(string s) 
    {
        int n = s.length();

        vector<char> vowels;

        for (int i = 0; i < n; i++)
        {
            if(is_Vowel(s[i]))
            {
                vowels.push_back(s[i]);
            }
        }

        sort(vowels.begin(),vowels.end());
        int ind = 0;

        for (int i = 0; i < n; i++)
        {
            if(is_Vowel(s[i]))
            {
                s[i] = vowels[ind];
                ind++;
            }
        }
        
        return s;
    }
};