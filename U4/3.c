#include <stdio.h>
#include <float.h>
int main()
{
    float a = 1.0/3.0;
    double b = 1.0/3.0;
    printf("%.6f\n",a);
    printf("%.12f\n",a);
    printf("%.16f\n",a);
    printf("%.6f\n",b);
    printf("%.12lf\n",b);
    printf("%.16f\n",b);
    printf("%d\n",FLT_DIG);
    printf("%d\n",DBL_DIG);
    return 0;
}