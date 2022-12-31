#include <iostream>
using namespace std;

//hierarchical inheritance 
class acc
{
    private:
    int ano;
    char name[20];
    public:
    void getacc()
    {
        cout<<"enter accno,name\n";
        cin>>ano>>name;
    }
    void putacc()
    {
        cout<<"accno="<<ano<<endl;
        cout<<"name="<<name<<endl;
    }
};
class saving:public acc
{
    float bal;
    public:
    void getbal()
    {
        cout<<"enter balance\n";
        cin>>bal;
        if(bal<500)
             cout<<"min bal 500\n";
        else
            cout<<"savings account created\n";
    }
};
class current:public acc
{
    float bal;
    public:
    void getbal()
    {
        cout<<"enter balance\n";
        cin>>bal;
        if(bal<1000)
             cout<<"min bal 1000\n";
        else
            cout<<"current account created\n";
    }
};
int main()
{
    int op;
    cout<<"1.savings A/C\n";
    cout<<"2.current A/C\n";
    cout<<"enter your option\n";
    cin>>op;
    if (op==1)
    {
        saving s;
        s.getacc();
        s.getbal();
    }
    else if (op==2)
    {
        current c;
        c.getacc();
        c.getbal();
    }
    else
        cout<<"Invalid solution\n";    
    return 0;
}