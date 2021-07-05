class Solution{
public:
    int binarysearch(int arr[], int n, int k){
        // code here
        int i,j,low,high,mid,t;
        low=0;
        high=n-1;
        mid=(low+high)/2;
        while(low<=high)
        {
            if(arr[mid]==k)
            {
                return mid;
            }
            else if(arr[mid]<k)
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            mid=(low+high)/2;
        }
        return -1;
    }
};
