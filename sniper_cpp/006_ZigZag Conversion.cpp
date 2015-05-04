class Solution {
public:
    string convert(string s, int numRows)
    {
        if(numRows==1)
        {
            return s;
        }
        vector<string> ss(numRows,"");
        int i,j=0;
        bool isUp=false;
        for(i=0;i<s.length();i++)
        {
            ss[j].push_back(s[i]);
            if(j==0)
            {
                isUp=false;
                j=1;
                continue;
            }
            if(j==numRows-1)
            {
                isUp=true;
                j=numRows-2;
                continue;
            }
            if(isUp)
            {
                j--;
            }
            else
            {
                j++;
            }
        }
        string ans;
        for(i=0;i<numRows;i++)
        {
            ans+=ss[i];
        }
        return ans;
    }
};
