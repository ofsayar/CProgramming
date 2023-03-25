#include <stdio.h>
#include <stdlib.h>

enum gender {male,female};

int main()
{
    enum gender myGender;

    myGender=male;
    enum gender anotherGender=female;

    printf("%d\n%d",myGender,anotherGender);
    printf("\n");

    char myChar='f';
    char myNew='\n';
    printf("%c%c",myChar,myNew);
    return 0;
}
