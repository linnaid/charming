#include<stdio.h>
#define SIZE 40
char* mystrncpy(char*s1,char*s2,int n)
{
    int i = 0;
    while(*s1 != '\0' && i < n)
    {
        *(s2+i++) = *s1++;
    }
    if(i < n)
    {
        *(s2 + i++) = '\0';
    }
    return s2;
}

int main()
{
    char s1[SIZE],s2[SIZE];
    int n;
    fgets(s1,SIZE,stdin);
    scanf("%d",&n);
        mystrncpy(s1,s2,n);
        puts(s2);
    return 0;
}