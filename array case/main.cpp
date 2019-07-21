#include <iostream>
//#include <stdlib.h>
using namespace std;

int main()
{
   int m;
        cout<< "how many size of the array?";
        cin>>m;
        int arr[m];
        for(int i=0; i<m; i++)
        {
            cout<< "enter element  "<< i+1<< ":   ";
            cin>>arr[i];
        }

    cout<< endl<<endl<<endl;
   int n;
   cout<< "1.FOR INSERT ARRAY."<<endl<<endl;
   cout<< "2.FOR DELETE ARRAY."<<endl<<endl;
   cout<< "3.FOR UPDATE ARRAY."<<endl<<endl;
   cin>>n;
    //system("CLS");
   switch(n)
   {
   case 1:

    {
        int l;
        cout<< "what is the position for insert a number?";
        cin>>l;
       int j=m;
       m=m+1;
       while(j>=l)
       {
           arr[j+1]=arr[j];
           j=j-1;
       }
       int o;
       cout<< "enter the number which you can insert.";
       cin>>o;
       arr[l]=o;
       cout<< "the update array is: "<<endl;
       for(int i=0; i<m; i++)
       {
           cout<< arr[i]<< "  ";
       }
        cout<< endl<<endl;
        break;

    }
   case 2:
    {
        int l;
        cout<< "what is the position for you delete a number?";
        cin>>l;
        int j=m;
        m=m-1;
        while(l<=j)
        {
            arr[l]=arr[l+1];
            l++;
        }
        cout<< "the update array is: "<<endl;
        for(int i=0; i<m; i++)
        {
            cout<< arr[i]<< "  ";
        }
         cout<< endl<<endl;
        break;
    }
   case 3:
    {
        int l;
        cout<< "what is the position for you update a number?";
        cin>>l;
        int up;
        cout<< "enter the updated number:";
        cin>> up;
        arr[l]=up;
        cout<< "the update array is: "<<endl;
        for(int i=0; i<m; i++)
        {
            cout<< arr[i]<< "  ";
        }
        cout<< endl<<endl;
        break;
    }
   default:
    cout<< "the number is not invalid.\nplease choice 1,2,3."<<endl;
   }
}
