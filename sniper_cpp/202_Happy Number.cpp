class Solution {
public:
    bool isHappy(int n)
    {
        set<int> ns;
        while(n>1)
        {
            if(ns.find(n)!=ns.end())
            {
                return false;
            }
            ns.insert(n);
            n=squaresum(n);
        }
        return true;
    }
    int squaresum(int n)
    {
        int sum=0;
        while(n>0)
        {
            int a=n%10;
            sum+=a*a;
            n/=10;
        }
        return sum;
    }
};
