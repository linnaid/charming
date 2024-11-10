#include<stdio.h>
#include<ctype.h>
#include<string.h>

int Word(char* str,int n);
int Upper(char* str,int n);
int Lower(char* str,int n);
int Punct(char* str,int n);
int Number(char* str,int n);
int main()
{
    char str[1000];
    int i = 0;
    while((str[i++] = getchar()) != EOF)
    {
        if(i >= 1000)
        break;
    }
    i = 0;
    while(str[i] != EOF)
    i++;
    int sz = i;
    printf("\n%d %c",sz,str[1]);
    int word,upper,lower,punct,number;
    word = Word(str,sz);
    upper = Upper(str,sz);
    lower = Lower(str,sz);
    punct = Punct(str,sz);
    number = Number(str,sz);
    printf("\n%d %d %d %d %d",word,upper,lower,punct,number);
    return 0;
}

int Number(char* str,int n)
{
    int a = 0;
    for(int i = 0; i < n; i++)
    {
        if(isdigit(*str) != 0)
        {
            *str++;
            a++;
        }
        else
           *str++;
    }
    return a;
}

int Punct(char* str,int n)
{
    int a = 0;
    for(int i = 0; i < n; i++)
    {
        if(ispunct(*str) != 0)
        {
            *str++;
            a++;
        }
        else
        *str++;
    }
    return a;
}

int Lower(char* str,int n)
{
    int a = 0;
    for(int i = 0; i < n; i++)
    {
        if(islower(*str) != 0)
        {
            *str++;
            a++;
        }
        else
        {
            *str++;
        }
        //printf("\n%c",*str);
    }
    return a;
}

int Upper(char* str,int n)
{
    int a = 0;
    for(int i = 0; i < n; i++)
    {
        if(isupper(*str) != 0)
        {
            *str++;
            a++;
        }
        else{
        *str++;
        continue;
        }
    }
    return a;
}
int Word(char* str,int n)
{
    int a = 0;
    //printf("\n%d",n);
    for(int i = 0; i < n; i++)
    {
        if(isalpha(*str) != 0)
        {
            *str++;
            continue;
        }
        else
        {
            *str++;
            a++;
        }
    }
    return a;
}
