#include <iostream>
using namespace std;

class stu
{
    int id,sub[6];
    char name[20];
    public:
    void getstu();
    void result();
};
void stu::getstu()
{
    cout<<"Enter stu id,name\n";
    cin>>id>>name;
    cout<<"Enter 6 sub marks\n";
    for (int i = 0; i < 6; i++)
    {
        cin>>sub[i];
    }
}
void stu::result()
{
    int tot=0;
    float avg;
    for (int i = 0; i < 6; i++)
    {
        tot+=sub[i];
    }
    avg=tot/6.0;
    cout<<"total="<<tot<<endl;
    cout<<"avg="<<avg<<endl;
    cout<<"result=";
    for (int i = 0; i < 6; i++)
    {
        if (sub[i]<35)
        {
            cout<<"fail\n";
            goto last;
        }
    }
    cout<<"pass\n";
    last:
    getc;
}

int main()
{
    stu s;
    s.getstu();
    s.result();
    return 0;
}