bool isBinary(string str)
{
   // Your code here
   int i,j,k;
   for(i=0;str[i]!='\0';i++)
   {
       if(str[i]=='0'||str[i]=='1'){
           continue;
       }
       else{
           return 0;
       }
   }
   return 1;
}
