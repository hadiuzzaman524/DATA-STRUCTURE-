#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int freq,amp;
    for(int t=0; t<n; t++)
    {
        cin>>amp;
        cin>>freq;
        while(freq)
        {
            for(int i=1; i<=amp; i++)
            {
                for(int j=1; j<=i; j++)
                {
                    cout<< i;
                }
                cout<<endl;
            }
            for(int i=amp-1; i>0; i--)
            {
                for(int j=1; j<=i; j++)
                {
                    cout<< i;
                }
                cout<<endl;
            }
            cout<<endl;
            freq--;
        }
    }

    return 0;
}
