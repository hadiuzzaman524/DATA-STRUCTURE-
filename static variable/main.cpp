#include <iostream>

using namespace std;
class s
{

public:
    static int z;
    static void getmoney(int x)
    {
        z=z-x;
    }
    static void remmoney()
    {
        cout<< z<<endl;
    }

};
int s::z=110;
int main()
{
    s a;
    a.getmoney(10);
    a.remmoney();
    a.getmoney(40);
    a.remmoney();

    return 0;
}
