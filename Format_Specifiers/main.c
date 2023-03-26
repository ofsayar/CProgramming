#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=89;
    printf("The sum is %d\n",sum);

    int integerVar=100;
    float floatingVar=331.79;
    double doubleVar=8.44e+11;
    char charVar='W';
    _Bool boolVar=0;

    printf("integerVar=%i\n",integerVar); // for integer, i and d are valid.
    printf("floatingVar=%f\n",floatingVar); // the numbers of digit that are on right side of the dot depend on using machine
    printf("doubleVar=%e\n",doubleVar);
    printf("doubleVar=%g\n",doubleVar);
    printf("charVar=%c\n",charVar);
    printf("boolVar=%i\n",boolVar);

    //width specifier
    float x=2.93232323;;
    printf("%.2f",x);//there are 2 digits after the dot because we use .2 before 'f'

    return 0;
}
