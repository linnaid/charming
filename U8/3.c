#include<stdio.h>
float p(void)
{
    float f;
    char c;
    while(scanf("%g",&f) != 1)
    {
        while((c = getchar()) != '\n')
        putchar (c);
        printf("is not an number.\n");
        printf("Please enter a number,such as 2.5,-1,78E8,or 3:");
        continue;
    }
    return f;
}
int main()
{
    char ch = 'w';
    float first,second;
    while(ch != 'q')
    {
        printf("Enter the operation of your choice:\n");
        printf("a.add                s.subtract\n");
        printf("m.multiply           d.divide\n");
        printf("q.quit\n");
        ch = getchar();
        while(getchar() != '\n')
        continue;
        switch(ch)
        {
            case 'a':
             {
                printf("Enter first number:");
                first = p();
                printf("Enter second number:");
                second = p();
                printf("%g + %g = %g\n",first,second,first+second);
                break;
             }
            case 's':
             {
                printf("Enter first number:");
                first = p();
                printf("Enter second number:");
                second = p();
                printf("%g - %g = %g\n",first,second,first-second);
                break;
             }
            case 'm':
            {
                printf("Enter first number:");
                first = p();
                printf("Enter second number:");
                second = p();
                printf("%g * %g = %g\n",first,second,first*second);
                break;
            }
            case 'd':
             {
                printf("Enter first number:");
                first = p();
                printf("Enter second number:");
                second = p();
                while(second == 0)
                {
                    printf("Enter a number other than 0:");
                    second = p();
                }
                printf("%g / %g = %g\n",first,second,first/second);
                break;
             }
        }
    }
    return 0;
}