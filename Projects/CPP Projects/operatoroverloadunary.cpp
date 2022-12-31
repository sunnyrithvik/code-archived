#include <iostream>
using namespace std;

//overloading Unary operator
class test
{
    int a;
    public:
    test()
    {
        a=0;
    }
    void operator ++()
    {
        a++;
    }
    void operator --()
    {
        a--;
    }
    void show()
    {
        cout<<"a="<<a<<endl;
    }
};
int main()
{
    test t;//obj
    t++;
    t.show();
    t--;
    t.show();
    return 0;
}