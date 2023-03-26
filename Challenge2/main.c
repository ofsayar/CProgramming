#include <stdio.h>
#include <stdlib.h>

int main()
{
    double height=3.2,width=5.6;
    double perim=0.0,area=0.0;
    perim=2.0*(height+width);
    area=width*height;

    printf("The height:%.2f, The width:%.2f and Perimeter:%.2f\n",height,width,perim);
    printf("The height:%.2f, The width:%.2f and Area:%.2f",height,width,area);
    return 0;
}
