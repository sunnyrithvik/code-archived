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
            cout<<i;
        cout<<endl;          
    }
    cout<<"-------------------"<<endl;
    for (int i=n; i>=0; i--)
    {
        for(a=0;a<i;a++)
            cout<<i;
        cout<<endl;          
    }  
}

/*
enter a number
5
1
22
333
4444
55555
-------------------
55555
4444
333
22
1
*/