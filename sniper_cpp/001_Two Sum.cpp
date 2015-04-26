bool cmp(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first<b.first;
}

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int i,j,k;
        vector<pair<int,int>> pii;
        vector<int> ans;
        for(i=0;i<nums.size();i++)
        {
            pii.push_back(make_pair(nums[i],i+1));
        }
        sort(pii.begin(),pii.end(),cmp);
        for(i=0,j=pii.size()-1;i<j;)
        {
            k=pii[i].first+pii[j].first;
            if(k<target)
            {
                i++;
            }
            else if(k>target)
            {
                j--;
            }
            else
            {
                i=pii[i].second;
                j=pii[j].second;
                if(i<j)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                }
                else
                {
                    ans.push_back(j);
                    ans.push_back(i);
                }
                return ans;
            }
        }
        return ans;
    }
};
