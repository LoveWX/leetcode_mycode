class Solution {
public:
    int compareVersion(string version1, string version2)
    {
        int i=0,j=0,ii,jj,vi,vj,l1=version1.length(),l2=version2.length();
        while(i<l1 || j<l2)
        {
            for(ii=i;ii<l1&&version1[ii]!='.';ii++);
            for(jj=j;jj<l2&&version2[jj]!='.';jj++);
            vi=s2i(version1,i,ii-1);
            vj=s2i(version2,j,jj-1);
            if(vi>vj)
            {
                return 1;
            }
            if(vi<vj)
            {
                return -1;
            }
            i=ii+1;
            j=jj+1;
        }
        return 0;
    }
    int s2i(string &str,int ss,int ee)
    {
        if(ss>=str.length() || ee<ss)
        {
            return 0;
        }
        int ans=0;
        while(ss<=ee)
        {
            ans=ans*10+str[ss++]-'0';
        }
        return ans;
    }
};
