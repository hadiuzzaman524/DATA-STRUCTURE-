#include <iostream>

using namespace std;
void fun(int n)
{
    if(n>0)
    {

        fun(n-1);
        cout<< n<<endl;
        fun(n-1);

    }
}
int main()
{
    fun(2);
    return 0;
}