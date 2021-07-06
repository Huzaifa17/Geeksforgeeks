class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        int i,j,k,min_x=n+1,min_y=n+1,min=n,c1=0,c2=0,dis;
        for(i=0;i<n;++i)
        {
            if(a[i]==x){
                    min_x=i;
                c1=1;
            }
            if(a[i]==y){
                    min_y=i;
                c2=1;
            }
            if(c1==1&&c2==1){
                dis=min_x-min_y;
                if(dis<0){
                    dis*=-1;
                }
                if(dis<min){
                    min=dis;
                }
            }
        }
        if(c1==0||c2==0){
            return -1;
        }
        return min;
    }
};
