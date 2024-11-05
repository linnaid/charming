#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n > 0)
    {
        int week = n/7;
        int days = n%7;
        printf("This is %d week and %d days\n",week,days);
        scanf("%d",&n);
    }
    printf("BOO~~~\n");
    return 0;
}