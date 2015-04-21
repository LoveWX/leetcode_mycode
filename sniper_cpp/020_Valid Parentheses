class Solution {
public:
    bool isValid(string s)
    {
        stack<char> sc;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            {
                sc.push(s[i]);
            }
            else if(s[i]==')')
            {
                if(sc.empty() || sc.top()!='(')
                {
                    return false;
                }
                sc.pop();
            }            
            else if(s[i]==']')
            {
                if(sc.empty() || sc.top()!='[')
                {
                    return false;
                }
                sc.pop();
            }
            else if(s[i]=='}')
            {
                if(sc.empty() || sc.top()!='{')
                {
                    return false;
                }
                sc.pop();
            }
        }
        if(!sc.empty())
        {
            return false;
        }
        return true;
    }
};
