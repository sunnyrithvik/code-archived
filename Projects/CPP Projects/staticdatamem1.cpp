#include <iostream>
using namespace std;

class test
{
    public:
    static int a;
    void get()
    {
        cout<<"a="<<a<<endl;
    }
};
int test::a=10;
int main()
{
    test::a=20;
    cout<<"a="<<test::a<<endl;
    test t;
    t.get();
    return 0;
}