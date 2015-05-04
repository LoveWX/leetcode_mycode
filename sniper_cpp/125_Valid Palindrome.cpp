class Solution {
public:
    bool isPalindrome(string s)
    {
        string ss;
        for(int i=0;i<s.length();i++)
        {
            if('a'<=s[i] && s[i]<='z')
            {
                ss+=s[i];
            }
            else if('0'<=s[i] && s[i]<='9')
            {
                ss+=s[i];
            }
            else if('A'<=s[i] && s[i]<='Z')
            {
                ss+=s[i]-'A'+'a';
            }
        }
        string sss=ss;
        reverse(ss.begin(),ss.end());
        return ss==sss;
    }
};
