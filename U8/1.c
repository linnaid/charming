#include<stdio.h>
int main()
{
    //FILE* p = fopen("/home/linnaid/文档/cpp/U8/1.c","r");
    int n = 0;
    char ch;
    while((ch = getchar()) != EOF)
    {
        n++;
    }
    printf("%d",n);
    return 0;
}
//Ctrl + D用于输入EOF；