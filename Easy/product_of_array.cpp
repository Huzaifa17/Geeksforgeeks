long long int product(int ar[], int n, long long int mod)
 {
     
     //code here
     int i,j,k;
     long long sum=1;
     for(i=0;i<n;++i)
     {
         sum*=(ar[i]);
         sum=sum%mod;
     }
     return sum;
 }
