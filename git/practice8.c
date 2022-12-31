
#include <stdio.h>

extern int a = 10;

int main()
{
    //extern int a;
    a = 20;
    printf("value of a is %d\n",a);
}
