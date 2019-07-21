#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

int pattarn_matching(string ss,string p)
{
    int k=0,s=0,col,index;
    int a[4][2]={{1,0},{1,3},{3,0},{-1,2}};
    while(s !=-1&&k<ss.size())
    {
        if(ss[k]=='a')
        {
            col=0;
        }
        else
        {
            col=1;
        }
         s=a[s][col];
        k++;
    }
    if(s==-1)
    {
        index=k-p.size()+1;

    }
    else
    {
        index=0;
    }


    return index;

}
int main()
{
    string s1;
    string s2;
    getline(cin,s1);
    getline(cin,s2);
    int i=pattarn_matching(s1,s2);
    cout<< i<<endl;
}
