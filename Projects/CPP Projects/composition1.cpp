#include <iostream>
using namespace std;

class test1
{
    int a,b;
    public:
    friend class test2;
    void getab()
    {
        cout<<"enter a,b values\n";
        cin>>a>>b;
    }
};
class test2
{
    public:
    void putab(test1 t1)
    {
        cout<<"a="<<t1.a<<endl;
        cout<<"b="<<t1.b;
    }
};
int main()
{
    test1 t1;
    test2 t2;
    t1.getab();
    t2.putab(t1);
    return 0;
}
