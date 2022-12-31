#include <iostream>
using namespace std;

//operator overloading using friend
class test2;
class test1
{
    int a;
    public:
    void geta()
    {
        cout<<"enter a value\n";
        cin>>a;
    }
    friend void operator >(test1,test2);
};
class test2
{
    int b;
    public:
    void getb()
    {
        cout<<"enter a value\n";
        cin>>b;
    }
    friend void operator >(test1,test2);
};

int main()
{
    test1 t1;
    test2 t2;
    t1.geta();
    t2.getb();
    t1>t2;
}
void operator >(test1,test2)
{
    t1.a>t2.b?cout<<"a is big":cout<<"b is big";
} 