void printPat(int n)
{
//Your code here
int i,j,k=n,m,t=0;
for(i=k;i>=1;i--){
    for(j=k;j>=1;--j){
        for(m=i;m>=1;--m){
            cout<<j<<' ';
        }
    }
    cout<<'$';
}
}
