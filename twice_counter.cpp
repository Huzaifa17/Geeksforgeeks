class Solution
{
    public:
        int countWords(string list[], int n)
        {
           //code here.
           map<string,int> mp;
           map<string,int> ::iterator it;
           int sum=0;
           int i,j,k,m;
           for(i=0;i<n;++i)
           {
               mp[list[i]]++;
           }
           for(it=mp.begin();it!=mp.end();++it)
           {
               if(it->second==2)
               {
                   sum++;
               }
           }
           return sum;
        }

};
