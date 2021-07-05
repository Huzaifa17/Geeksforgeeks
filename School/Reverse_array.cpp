#include <iostream>
using namespace std;

int main() {
	//code
    int i,j,k,t,n;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        int arr[n];
        for(j=0;j<n;j++){
            cin>>arr[j];
        }
        for(j=n-1;j>=0;j--)
        {
            if(j==n-1)
            {
                cout<<arr[j];
            }
            else{
                cout<<' '<<arr[j];
            }
        }
        cout<<endl;
    }
	return 0;
}