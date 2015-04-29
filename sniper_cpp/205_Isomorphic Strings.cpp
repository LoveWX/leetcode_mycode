class Solution {
public:
    bool isIsomorphic(string s, string t)
    {
        vector<int> a,b;
        str2vec(s,a);
        str2vec(t,b);
        for(int i=0;i<s.length();i++)
        {
            if(a[i]!=b[i])
            {
                return false;
            }
        }
        return true;
    }
    void str2vec(string &ss,vector<int> &vi)
    {
        map<char,int> dict;
        int kk=1;
        for(int i=0;i<ss.length();i++)
        {
            if(dict[ss[i]]>0)
            {
                vi.push_back(dict[ss[i]]);
            }
            else
            {
                dict[ss[i]]=kk;
                vi.push_back(kk++);
            }
        }
    }
};
