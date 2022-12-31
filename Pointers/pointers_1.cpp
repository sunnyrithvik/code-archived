#include<stdio.h>
int main()
{
    int a ;
    int *p;
    p = &a;

    printf("a = %d\n",a);
    a = 7;

    printf("a = %d\n",a);
    printf("p = %d\n",p);
    printf("&a = %d\n",&a);
    printf("*p = %d\n",*p);

    *p = 9;
    printf("a = %d\n",a);

    return 0;
}

/*
Result:
a = 0
a = 7
p = 6422036
&a = 6422036
*p = 7
a = 9
*/