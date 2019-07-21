#include <iostream>
using namespace std;

int *insertionsort(int arr[],int m)
{
	for(int j=1; j<m; j++)
	{ int key=arr[j];
	int i=j-1;
	while(i>=0&&arr[i]>key)
	{
		arr[i+1]=arr[i];

		arr[i]=key;
	}

	}

    return arr;
}

int* selection( int arr[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        int small=i ;
        for(int j=i+1; j<n; j++)
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
 return arr;
}
int* bubblesort(int ar[],int n)
{
     for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(ar[j]>ar[j+1])
            {
                int temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
   return ar;
}
int main()
{
	static int arr[]={1,6,3,9,13,7,19};
	int k=sizeof(arr)/sizeof(int);
	int *p=insertionsort(arr,k);
	for(int i=0; i<k; i++)
        cout<< *p++<< " ";
        cout<<endl;
	int *q=selection(arr,k);
	for(int i=0; i<k; i++)
    {
        cout<< *q++<< " ";
    }
    cout<<endl;
  int *r=bubblesort(arr,k);
  for(int i=0; i<k; i++)
 cout<< *r++<< " ";
 cout<<endl;


	return 0;
}
