void print(int ar[], int n)
{
    
    // code here
    int i,j,k=0;
    for(i=0;i<n;i=i+2)
    {
        if(k==0)
        {
            cout<<ar[i];
            k=1;
        }
        else{
            cout<<' '<<ar[i];
        }
    }
    
    
}
