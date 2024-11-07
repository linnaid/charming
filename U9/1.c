#include<stdio.h>
double power2(double f, int p)
{
    float a = f;
    if(p == 1)
    return a;
    a = f * power2(f,p-1);
    return a;
}
double power3(double f, int p)
{
    float a = power2(f,-p);
    return 1.0/a;
}
double power(double f,int p)
{
    if(f == 0 && p == 0)
    {
        printf("The %g to the power %d is not define,return 1.\n",f,p);
        return 1;
    }
    if(f == 0)
    return 0;
    if(p == 0)
    return 1;
    if(p > 0)
    {
        return power2(f,p);
    }
    if(p < 0)
    return power3(f,p);
}
int main()
{
    double num,pow;
    int p;
    while(scanf("%lf %d",&num,&p) == 2)
    {
        pow = power(num,p);
        printf("The %g to the power %d is %g\n",num,p,pow);
    }
    return 0;
}