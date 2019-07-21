#include <iostream>

using namespace std;

int main()
{
    int n;

    cin>>n;
    string s[n];
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    int k;
    cin>>k;
    string q[k];
    for(int i=0; i<k; i++)
    {
        cin>>q[i];
    }


    for(int i=0; i<k; i++)
    {
         int coun=0;
        for(int j=0; j<n; j++)
        {
            if(q[i]==s[j])
            {
                coun++;
            }

        }
        cout<<coun<<endl;

    }


}
