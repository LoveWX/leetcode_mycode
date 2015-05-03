class Solution {
public:
    int rob(vector<int>& nums)
    {
        int aa=0,bb=0,i;
        for(i=0;i<nums.size();i++)
        {
            int tt=max(aa,bb);
            aa=bb+nums[i];
            bb=tt;
        }
        return max(aa,bb);
    }
};
