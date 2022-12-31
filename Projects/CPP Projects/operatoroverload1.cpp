#include <iostream>
using namespace std;

//overloading == operator
class test
{
    int a;
    public:
    void get()
    {
        cin>>a;
    }
    //void compare(test t2)
    void operator ==(test t2)   //t2 is explicit obj
    {
        if(a==t2.a)
             cout<<"object are equal";
        else
             cout<<"objects are not equal";
    }
};
int main()
{
    test t1,t2;
    cout<<"enter t1 object a value\n";
    t1.get();
    cout<<"enter t2 object a value\n";
    t2.get();
    //t1.compare(t2);
    t1==t2;   //fn calling
    return 0;
}