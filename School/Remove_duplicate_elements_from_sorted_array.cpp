class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        int i=0,j,k,m=a[0],t,count=1;
        for(i=1,j=1;i<n;i++){
            if(a[i]==m){
                continue;
            }
            else{
                m=a[i];
                a[j]=a[i];
                count++;
                j++;
            }
        }
        return count;
    }
};
