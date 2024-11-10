#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int Rand(int a)
{
    int n = 0;
    srand((unsigned int)time(NULL));
    for(int i = 0; i < 1000; i++)
    {
        int b = rand()%10 + 1;
        if(b == a+1)
        n++;
    }
    return n;
}

int main()
{
    int arr[10];
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
        arr[j] = Rand(j);
        printf("%d ",arr[j]);
        }
        printf("\n");
    }
    return 0;
}