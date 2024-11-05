#include<stdio.h>
#include <string.h>
int main()
{
    int a,b;
    char name[30],surname[30];
    scanf("%s %s",name,surname);
    a = strlen(name);
    b = strlen(surname);
    printf("%s %s",name,surname);
    printf("\n%*d %*d",a,a,b,b);
    printf("\n%s %s",name,surname);
    printf("\n%-*d %-*d",a,a,b,b);
    return 0;
}