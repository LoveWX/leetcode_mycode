class Solution {
public:
    string countAndSay(int n)
    {
        int i,cnt;
        char ch;
        string last="1",curr;
        while(--n)
        {
            cnt=1;
            ch=last[0];
            curr="";
            for(i=1;i<last.length();i++)
            {
                if(last[i]==ch)
                {
                    cnt++;
                }
                else
                {
                    curr+=cnt+'0';
                    curr+=ch;
                    cnt=1;
                    ch=last[i];
                }
            }
            curr+=cnt+'0';
            curr+=ch;
            last=curr;
        }
        return last;
    }
};
