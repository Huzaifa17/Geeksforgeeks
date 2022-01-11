class solution
{
public:
    int search(int A[], int l, int h, int key){
    //complete the function here
   // int pos=-1;
    int mid,i,j,k;
    while(l<=h)
    {
        mid=l+((h-l)/2);
        if(A[mid]==key)
        {
            return mid;
        }
        if(A[l]<A[mid])
        {
            if(A[l]<=key&&A[mid]>key)
            {
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        else
        {
            if(A[mid]<key&&A[h]>=key)
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
    }
    return -1;
    }
};
