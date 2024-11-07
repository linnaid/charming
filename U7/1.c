#include<stdio.h>
int main()
{
    char ch;
    int n = 0;
    scanf("%c",&ch);
    while(ch != '#')
    {
        ++n;
        if((n-1) % 8 == 0)
        printf("\n");
        if(ch == '\n')
        printf("\\n-%03d",ch);
        else if(ch == '\t')
        printf("\\t-%03d",ch);
        else
        printf("%c-%03d ",ch,ch);
        scanf("%c",&ch);
    }
    printf("\nBOO~~~");
    return 0;
}