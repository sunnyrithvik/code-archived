#include <iostream>
using namespace std;
class test2;
class test1
{
    int a;
    public:
    friend void big(test1,test2);
    void geta()
    {
        cout<<"enter a value\n";
        cin>>a;
    }
};
class test2
{
    int b;
    public:
    void getb()
    {
        cout<<"enter b value\n";
        cin>>b;
    }
    friend void big(test1,test2);
};
void big(test1 t1,test2 t2)
{
    if (t1.a>t2.b)
         cout<<"a is big\n";
    else if (t2.b>t1.a)
         cout<<"b is big\n";
    else
         cout<<"both are equal\n";
}
int main()
{
    test1 t1;
    test2 t2;
    t1.geta();
    t2.getb();
    big(t1,t2);
    return 0;
}