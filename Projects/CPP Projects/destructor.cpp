#include <iostream>
using namespace std;

class sample()
{
    int a,b;
    public:
    sample()//constructor
    {
        a=10;
        b=20;
    }
    ~sample()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
        gets;
    }
};
int main()
{
    sample s;
    return 0;
}