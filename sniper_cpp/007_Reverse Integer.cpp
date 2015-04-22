class Solution {
public:
    int reverse(int x)
    {
        long long sum=0;
        int xx=abs(x);
        while(xx>0)
        {
            sum=sum*10+xx%10;
            xx/=10;
        }
        if(sum>0x7FFFFFFF)
        {
            return 0;
        }
        if(x>=0)
        {
            return int(sum);
        }
        else
        {
            return -int(sum);
        }
    }
};
