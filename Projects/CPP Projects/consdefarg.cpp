#include <iostream>
using namespace std;

class Test
{
    int a,b,c;
    public:
    Test(int x=1,int y=2,int z=3)
    {
        a=x;
        b=y;
        c=z;
    }
    void show()
    {
        cout<<a<<"\t"<<b<<"\t"<<c<<endl;
    }
};

int main()
{
    Test t1(10,20,30);
    Test t2(10,20);
    Test t3(10);
    Test t4();
    t1.show();
    t2.show();
    t3.show();
    //t4.show();
    return 0;
}