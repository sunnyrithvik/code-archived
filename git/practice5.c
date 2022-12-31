
#include <stdio.h>

int a = 10;

int main()
{
    int a ;
    printf("value of a is %d\n",a);
}

/*

result:
value of a is 0

/*

a is declared and defined in global but not defined locally
so it takes the default value of int as 0

*/