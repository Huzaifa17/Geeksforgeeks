int binarysearch(vector<int> temp,int r,int key)
{
    int l=0,mid,pos=-1;
    while(r>=l)
    {
        mid=(l+r)/2;
        if(temp[mid]>=key)
        {
            pos=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return pos;
}

class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
       int i,j,k,m;
       if(n==1)
       {
           return 1;
       }
       int len=1;
       vector<int> temp(n);
       temp[0]=a[0];
       for(i=1;i<n;++i)
       {
           if(a[i]<temp[0])
           {
               temp[0]=a[i];
           }
           else if(a[i]>temp[len-1])
           {
               temp[len++]=a[i];
           }
           else
           {
               //here is binary search comes in
               temp[binarysearch(temp,len-1,a[i])]=a[i];
           }
       }
       return len;
    }
};
