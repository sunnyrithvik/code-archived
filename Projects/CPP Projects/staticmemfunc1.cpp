#include <iostream>
using namespace std;

class test
{
    public:
    static void read(int x,int y)
    {
        if(x>y)
             cout<<"x is big\n";
        else if(y>x)
            cout<<"y is big\n";
        else
            cout<<"both are equal\n";
    }
};
int main()
{
    test t1;
    t1.read(10,7);
    test::read(20,30);
    test::read(5,5);
}