class Solution {
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> last,current(1,1);
        if(rowIndex==0)
        {
            return current;
        }
        for(int i=1;i<=rowIndex;i++)
        {
            if(i%2==0)
            {
                last.push_back(last[last.size()-1]);
                current.push_back(1);
            }
            for(int j=1;j<=i/2;j++)
            {
                current[j]=last[j-1]+last[j];
            }
            last=current;
        }
        for(int i=(rowIndex+1)/2-1;i>=0;i--)
        {
            current.push_back(current[i]);
        }
        return current;
    }
};
