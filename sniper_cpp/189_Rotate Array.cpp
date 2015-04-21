class Solution {
public:
    void rotate(int nums[], int n, int k)
    {
        int i,j,*a=new int[n];
        for(i=(n-k%n)%n,j=0;i<n;i++,j++)
        {
            a[j]=nums[i];
        }
        for(i=0;j<n;i++,j++)
        {
            a[j]=nums[i];
        }
        for(i=0;i<n;i++)
        {
            nums[i]=a[i];
        }
        delete[] a;
    }
};
