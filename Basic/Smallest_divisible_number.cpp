class Solution{
public:
    long long getSmallestDivNum(long long n){
        // code here
        long long int a,b,c,gcd=1,i,j,k,lcm=1;
        for(i=1;i<=n;++i){
            k=i;
            gcd=lcm;
            b=lcm;
            while(1)
            {
                if(k==0){
                    break;
                }
                if(gcd==0){
                    break;
                }
                c=k;
                k=gcd;
                gcd=c%gcd;
            }
            if(k==0){
                lcm=(b*i)/gcd;
            }
            else{
                lcm=(b*i)/k;
            }
        }
        return lcm;
    }
};
