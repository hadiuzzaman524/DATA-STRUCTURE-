#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    bool flag=true;
    if(s1.size()!=s2.size())
    {
        cout<< "string is not anagram";

    }
    else
    {
        for(int i=0; i<s1.size(); i++)
            if(s1[i] !=s2[i])
                flag=false;
            if(flag==true)
                cout<<"string is anagram.";
            else
                cout<< "string is not anagram.";

    }

}
