#include <stdio.h>
#include <stdlib.h>

int main()
{

    double sAREA;
    const double pi=3.142 ;
    const double r ;
    printf("Please provide the radius: ");
    scanf("%lf", &r);
    sAREA= 4*pi*r*r;
    printf("The area is %f", sAREA);


    return 0;
}
