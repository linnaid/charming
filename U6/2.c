#include <stdio.h>
int main()
{
    double a,b,c;
    while(scanf("%lf",&a)==1 && scanf("%lf",&b)==1)
    {
        if(a >= b)
        c = (a-b) / (a*b) *1.0;
        else
        c = (b-a) / (a*b) *1.0;
        printf("%lf\n",c);
    }
    printf("BOO~~~");
    return 0;
}