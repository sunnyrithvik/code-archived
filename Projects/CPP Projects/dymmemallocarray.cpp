#include <iostream>

using namespace std;

int main()
{
    int **p, nr, nc, r, c;
    cout<<"enter no of rows & columns\n";
    cin>>nr>>nc;
    p= new int *[nr];
    for ( r = 0; r < nr; r++)
    {
        p[r]=new int [nc];
    }
    cout<<"enter "<<nr*nc<<" elements\n";
    for ( r = 0; r < nr; r++)
        for ( c = 0; c < nc; c++)
            cin>>p[r][c];
    cout<<"elements are\n";
    for ( r = 0; r < nr; r++)
    {
        for ( c = 0; c < nc; c++)
        {
            cout<<p[r][c]<<"\t";
        }
        cout<<endl;
    }
    delete p;
    return 0;
}