class Solution {
public:
    string convertToTitle(int n)
    {
        string ans;
        while(n>0)
        {
            int tt=n%26;
            if(tt==0)
            {
                ans+='Z';
                n=n/26-1;
            }
            else
            {
                ans+='A'+tt-1;
                n/=26;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
