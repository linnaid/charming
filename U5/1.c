#include<stdio.h>

int main()
{
    int a;
    const int b = 60;
    scanf("%d",&a);
    while(a > 0)
    {
        int hour = a/b;
        int minute = a%b;
        printf("This time is %02d:%02d\n",hour,minute);
        scanf("%d",&a);
    }
    printf("BOO~~~");
    return 0;
}