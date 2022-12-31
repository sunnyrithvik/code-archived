#include<iostream>
using namespace std;

int main()
{
    int a,n=0;
    cout<<"enter a number"<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for(a=0;a<i;a++)
            cout<<"*";
        cout<<endl;          
    }
    cout<<"-------------------"<<endl;
    for (int i=n; i>=0; i--)
    {
        for(a=0;a<i;a++)
            cout<<"*";
        cout<<endl;          
    } 
}

/*
enter a number
5
*
**
***
****
*****
-------------------
*****
****
***
**
*
*/