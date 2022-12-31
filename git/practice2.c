#include <stdio.h>

int main()
{
    int a,b,c,d,e;

    a = 2 , 3 , 4 , 5;
    printf("a is %d\n",a);

    b = 2 ,( 3 , 4 ), 5;
    printf("b is %d\n",b);

    c = (2 , (3 , 4) , 5);
    printf("c is %d\n",c);

    d = (( 2 , 3 ),( 4 , 5 ));
    printf("d is %d\n",d);

    e = (( 2 , 3 ), 4 , 5 );
    printf("e is %d\n",e);

}

/*
result:
a is 2
b is 2
c is 5
d is 5
e is 5

/*

 =(equal to) have more precedence than ,(comma)
 () have more precedence and reads from left to right

 */