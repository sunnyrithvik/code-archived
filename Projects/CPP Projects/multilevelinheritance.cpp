#include <iostream>
using namespace std;

//multi level inheritance 
class stu
{
    private:
    int id;
    char name[20];
    public:
    void getstu()
    {
        cout<<"enter stu id,name\n";
        cin>>id>>name;
    }
    void putstu()
    {
        cout<<"id="<<id<<endl;
        cout<<"name="<<name<<endl;
    }
};
class marks:public stu
{
    protected:
    int m1,m2,m3;
    public:
    void getmarks()
    {
        cout<<"enter 3 subj marks\n";
        cin>>m1>>m2>>m3;
    }
    void putmarks()
    {
        cout<<"m1="<<m1<<endl;
        cout<<"m2="<<m2<<endl;
        cout<<"m3="<<m3<<endl;
    }
};
class result:public marks
{
    int tot;
    float avg;
    public:
    void show()
    {
        tot=m1+m2+m3;
        avg=tot/3.0;
        cout<<"tot="<<tot<<endl;
        cout<<"avg="<<avg<<endl;
    }
};
int main()
{
    result r;
    r.getstu();
    r.getmarks();
    r.putstu();
    r.putmarks();
    r.show();
    return 0;
}