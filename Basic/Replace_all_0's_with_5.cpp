int convertFive(int n) {
    // Your code here
    int i=5,j,k,m=0;
    char s[6];
    while(n)
    {
        k=n%10;
        if(k==0){
            k=5;
        }
        s[i]=k+48;
        i--;
        n/=10;
    }
    for(i++;s[i]!='\0';++i){
        m=m*10+(s[i]-48);
    }
    return m;
}
