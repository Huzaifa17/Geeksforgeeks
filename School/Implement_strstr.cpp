int strstr(string s, string x)
{
     //Your code here
     int i,j,k,n,m;
     for(i=0;s[i]!='\0';++i)
     {
         if(x[0]==s[i]){
             m=0;
             for(j=0,k=i;x[j]!='\0';++j,++k){
                 if(x[j]!=s[k]){
                     m=1;
                     break;
                 }
             }
             if(m==0){
                 return i;
             }
         }
     }
     return -1;
}
