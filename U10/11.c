#include<stdio.h>
#define COLS 3
#define ROWS 5
void print2(int *aim, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ",*(aim+i));
    }
    printf("\n");
}
void print(int (*aim)[ROWS],int n)
{
    for(int i = 0; i < n; i++)
    {
        print2(*(aim+i),ROWS);
    }
}
void Double2(int *aim,int n)
{
    for(int i = 0; i < n; i++)
    {
        *(aim+i) = 2 * (*(aim + i));
    }
}
void Double (int (*aim)[ROWS], int n)
{
    for(int i = 0; i < n; i++)
    {
        Double2(*(aim+i),ROWS);
    }
}
int main()
{
    int aim[COLS][ROWS] = {{1,3,5,7,9},{2,4,6,8,10},{12,14,35,57,32,76}};
    print(aim,COLS);
    Double(aim,COLS);
    print(aim,COLS);
    return 0;
}