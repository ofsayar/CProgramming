#include <stdio.h>
#include <stdlib.h>

enum Company{GOOGLE,FACEBOOK,XEROX,YAHOO,EBAY,MICROSOFT};

int main()
{
    enum Company w2=XEROX;
    enum Company w0=GOOGLE;
    enum Company w4=EBAY;

    printf("%d\n%d\n%d",w2,w0,w4);
    return 0;
}
