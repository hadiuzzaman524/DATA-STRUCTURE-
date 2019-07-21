#include <iostream>

using namespace std;
void selection( int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        int small=i ;
        for(int j=i+1; j<n+1; j++)
        {
            if(arr[j]<arr[small])
                small=j;
        }
        if(small !=i)
        {
            int temp=arr[i];
            arr[i]=arr[small];
            arr[small]=temp;
        }

    }
for(int i=0; i<n; i++)
{
    cout<< arr[i]<< " ";
}
cout<<endl;
}
int main()
{
   static int arr[7]={1,6,3,9,13,7,19};
	//int k=sizeof(arr)/sizeof(int);
	//cout<< k<<endl;
	int k=7;
	selection(arr,k);
	/*for(int i=0; i<=k; i++)
        cout<< *q++<< " ";
        cout<<endl; */
    return 0;
}
