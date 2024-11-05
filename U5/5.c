#include<stdio.h>
void Temperatures(int n)
{
    const double a = 32.0;
    const double b = 273.16;
    double m = 5.0/9.0 * (n - a);
    double k = m + b;
    printf("华氏温度为%.2f,摄氏温度为%.2f,开氏温度为%.2f",n,m,k);
}
int main()
{
    double n;
    while(scanf("%lf",&n)==1)
    {
        Temperatures(n);
    }
    return 0;
}