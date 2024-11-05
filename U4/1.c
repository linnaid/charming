#include<stdio.h>
int main()
{
    char name[30] = "";
    int strlen = 0;
    scanf("%s",name);
    strlen = printf("\"%s\"\n",name);
    printf("\"%20s\"\n",name);
    printf("\"%-20s\"\n",name);
    printf("\"%*s\"\n",strlen,name);
    return 0;
}