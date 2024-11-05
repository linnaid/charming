#include <stdio.h>

int main()
{
    double f;
    scanf("%lf",&f);
    printf("Enter a floating-point value:%.2f\n",f);
    printf("fixed-point notation:%f\n",f);
    printf("exponential notation:%e\n",f);
    printf("p notation:%a\n",f);
    return 0;
}