#include <stdio.h>


int main()
{
    int a=33;
    int b=15;
    int result=0;

    printf("+:%d\n",a+b);
    printf("-:%d\n",a-b);
    printf("*:%d\n",a*b);
    printf("/:%d\n",a/b);
    printf("%:%d\n",a%b);
    printf("++:%d\n",++a);
    printf("--:%d\n",--b);

    //Logical Operators
    _Bool x=1;
    _Bool y=0;

    printf("&&:%d\n",x&&y);
    printf("||:%d\n",x||y);
    printf("!(&&):%d\n",!(x&&y));

    /*
    Assignment Operator
    =
    +=
    -=
    *=
    /=
    %=
    <<=
    >>=
    &=
    ^=
    |=
    */

    /*
    Relational Operators
    ==
    !=
    >
    <
    >=
    <=
    */

    return 0;
}
