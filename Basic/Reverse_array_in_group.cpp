class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        int i,j,m,sign=0,p;
        long long c;
        for(i=0;i<n;)
        {
            if(i+k<n){
                m=i+k;
            }
            else{
                m=n;
                sign=1;
            }
            for(p=0,j=i;j<(m+i)/2;j++,++p){
                c=arr[j];
                arr[j]=arr[m-p-1];
                arr[m-p-1]=c;
            }
            if(sign==1){
                break;
            }
            if(i+k<=n){
                i=i+k;
            }
            else{
                sign=1;
            }
        }
    }
};
