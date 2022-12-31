#include<iostream>
using namespace std;

int main()
{
    int a,n=0;
    cout<<"enter a number"<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for(a=1;a<=i;a++)
            cout<<a;
        cout<<endl;          
    }
    cout<<"-------------------"<<endl;
    for (int i=n; i>=0; i--)
    {
        for(a=1;a<=i;a++)
            cout<<a;
        cout<<endl;          
    }
}

/*
enter a number
5
1
12
123
1234
12345
-------------------
12345
1234
123
12
1
*/