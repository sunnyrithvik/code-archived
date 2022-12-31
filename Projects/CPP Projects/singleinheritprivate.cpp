#include <iostream>
using namespace std;

//single level inheritance in public mode
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
class phy:public stu
{
    float h,w;
    public:
    void getphy()
    {
        getstu();
        cout<<"enter stu height & weight\n";
        cin>>h>>w;
    }
    void putphy()
    {
        putstu();
        cout<<"height="<<h<<endl;
        cout<<"weight="<<w<<endl;
    }
};
int main()
{
    phy p;
    p.getphy();
    p.putphy();
    return 0;
}