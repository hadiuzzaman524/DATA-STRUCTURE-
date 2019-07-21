#include <iostream>

using namespace std;
class student
{
    int x;
public:
    string name;
    student(int p=0)
    {
        x=p;
    }
    void print()
    {
        cout<<x<<endl;
        cout<< name<<endl;
    }

};

int main()
{
   student s(5),e;
        s.print();
        s.name="bonna";
        s.print();
    return 0;
}
