#include <iostream>
using namespace std;

class author//container class
{
    char aname[20];
    friend class book;
};
class book//contained class
{
    char bname[20];
    float price;
    author a;//composition
    public:
    void getdata()
    {
        cout<<"enter author name"<<endl;
        cin>>a.aname;
        cout<<"enter book name"<<endl;
        cin>>bname;
        cout<<"enter book price"<<endl;
        cin>>price;
    }
    void putdata()
    {
        cout<<"book name="<<bname<<endl;
        cout<<"author name="<<a.aname<<endl;
        cout<<"book price="<<price<<endl;
    }
};
int main()
{
    book b;
    b.getdata();
    b.putdata();
    return 0;
}