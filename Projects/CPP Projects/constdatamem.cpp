#include <iostream>
using namespace std;

class si
{
    float p;
    int t;
    const float r;
    public:
    si():r(3)
    {}
    void read(float pa,int ti)
    {
        p=pa;
        t=ti;
    }
    float show()
    {
        return (p*t*r)/100;
    }
};
int main()
{
    si s;
    s.read(1000,10);
    cout<<"interest="<<s.show();
}