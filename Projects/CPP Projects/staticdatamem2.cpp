#include <iostream>
using namespace std;

class sample
{
    static int count;
    public:
    sample()
    {
        count++;
        cout<<count<<"object created\n";
    }
    ~sample()
    {
        cout<<count<<"object deleted\n";
        count--;
    }
};
int sample::count;
int main()
{
    sample s1,s2,s3;
    return 0;
}