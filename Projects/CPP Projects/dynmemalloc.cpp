#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter array size"<<endl;
    cin>>n;
    cout<<"enter elements"<<endl;

    int *p=new int [n];
    for (int i = 0; i < n; i++)
    {
        cin>>p[i];/* code */
    }
    cout<<"elements are"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<p[i]<<endl;/* code */
    }

    delete p;

    return 0;
}