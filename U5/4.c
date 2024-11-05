#include <stdio.h>
int main()
{
    int n,m;
    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand:\n");
    scanf("%d",&n);
    printf("Now enter the first operand:\n");
    scanf("%d",&m);
    while(m > 0)
    {
        printf("%d %% %d is %d\n",m,n,m%n);
        printf("Enter next number for first operand (<= 0 to quit):\n");
        scanf("%d",&m);
    }
    printf("Done~~~");
    return 0;
}