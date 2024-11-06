#include <stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    int l = a - 'A' + 1,n,j;
    for(int i = 0; i < l; i++)
    {
        char b = 'A';
        char c = 'A';
        for(n = 0; n < l-i; n++)
        {
            printf(" ");
        }
        for(j = n; j < l+1; j++)
        {
            printf("%c",b);
            b++;
        }
        for(b-=2,j = 0; j < i; j++)
        {
            printf("%c",b);
            b--;
        }
        printf("\n");
    }
    return 0;
}