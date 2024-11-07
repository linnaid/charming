#include<stdio.h>
void to_base_n(unsigned long n,unsigned short j)
{
    int a;
    a = n%j;
    if(n != 1)
    to_base_n(n/j ,j);
    printf("%d",a);
}
int main()
{
    unsigned long n;
    unsigned short j;
    while(scanf("%lu %hu",&n,&j) == 2)
    {
        if(j<2 || j>10)
        {
            printf("Error!\n");
            continue;
        }
        to_base_n(n,j);
    }
    return 0;
}