class solution
{
public:
    int isPrime(int N){
        if(N==1)
        {
            return 0;
        }
        if(N==2)
        {
            return 1;
        }
    vector<int> arr;
    arr.push_back(2);
    int i,j,k,n,m,r;
    r=sqrt(N)+1;
    int arr2[r+1]={0};
    for(i=3;i<=r;i+=2)
    {
        if(!arr2[i])
        {
            arr.push_back(i);
            for(j=i*i;j<=r;j+=i*2)
            {
                arr2[j]=1;
            }
        }
    }
    for(i=0;i<arr.size();++i)
    {
        if(N%arr[i]==0)
        {
            return 0;
        }
    }
        // code here
        return 1;
    }
};
