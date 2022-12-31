#include <iostream>
using namespace std;

//operator overload using insertion (<<) and extraction (>>)
class stu
{
    int id;
    char name[20];
    public:
    friend void operator >>(istream &in,stu &s)
    {
        cout<<"enter stu id,name\n";
        in>>s.id>>s.name;
    }
    friend void operator <<(ostream &out,stu &s)
    {
        out<<"id="<<s.id<<endl;
        out<<"name="<<s.name<<endl;
    }
};
int main()
{
    stu s;
    cin>>s;
    cout<<s;
    return 0;
}