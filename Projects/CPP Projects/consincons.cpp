#include <iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class stu
{
private:
    char name[20],course[20];
    float fee;/* data */
public:
    stu(char name[20],char course[20])
    {
        strcpy(this->name,name);
        strcpy(this->course,course);
        fee=0;
    }
    stu(char name[20],char course[20],float fee)
    {
        stu :: stu(name,course);//calling construtor;
        this-> fee=fee;
    }
    void showstu()
    {
        cout<<"name="<<name<<endl;
        cout<<"course="<<course<<endl;
        cout<<"fee="<<fee<<endl;
    }
};
int main()
{
    stu s1("ram","c++");
    stu s2("laxman","java",5000);
    s1.showstu();
    s2.showstu();
    return 0;
}