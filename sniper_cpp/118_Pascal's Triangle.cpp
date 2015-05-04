class Solution {
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> ans;
        if(numRows<=0)
        {
            return ans;
        }
        vector<int> last(1,1);
        ans.push_back(last);
        for(int i=2;i<=numRows;i++)
        {
            vector<int> curr(i,1);
            for(int j=1;j<last.size();j++)
            {
                curr[j]=last[j-1]+last[j];
            }
            ans.push_back(curr);
            last=curr;
        }
        return ans;
    }
};
