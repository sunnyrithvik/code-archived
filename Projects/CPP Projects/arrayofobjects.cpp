#include <iostream>
using namespace std;

class stu
{
private:
    int id;
    char name[20];/* data */
public:
    void getstu();
    void putstu();
};
void stu::getstu()
{
    cin>>id>>name;
}
void stu::putstu()
{
    cout<<id<<"\t"<<name<<endl;
}
int main()
{
    stu s[30];
    int i,n;
    cout<<"enter no of students[1-60]\n";
    cin>>n;
    if (n<1||n>60)
    {
        cout<<"value 1-60 only\n"; 
    }
    else
    {
        for ( i = 0; i < n; i++)
        {
            s[i].getstu();
        }   
    }
    cout<<"id\tname\n";
    cout<<"------------------\n";
    for ( i = 0; i < n; i++)
    {
        s[i].putstu();
    }
    return 0;    
}