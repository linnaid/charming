#include<stdio.h>
int main()
{
    int a,start=1,end=100;
    char ch[100000];
    while(1)
    {
        a = (start+end)/2;
        printf("Maybe it is %d,right?\n",a);
        scanf("%s",ch);
        if(ch[0] == 'n')
        {
            printf("OK,I guess again...\n");
            start = a;
            continue;
        }
        else if(ch[0] == 'N')
        {
            printf("OK,I guess again...\n");
            end = a;
            continue;
        }
        else if(ch[0] == 'y')
        {
            printf("Yes!I knew it!!!\n");
            break;
        }
        else
        {
            printf("Sorry,I don't understand it...\n");
            continue;
        }
    }
    return 0;
}