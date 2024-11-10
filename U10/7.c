#include<stdio.h>
#define COLS 3
#define ROWS 5
void strccpy2(double *aim,double *target,int n)
{
    for(int i = 0; i < n; i++)
    {
        //printf("%.1f ",*(aim+i));
        *(target+i) = *(aim+i);
        //printf("%.1f ",*(aim+i));
    }
}
void strccpy(double (*aim)[ROWS],double (*target)[ROWS],int n)
{
    for(int i = 0; i < n; i++)
    {
        strccpy2(*(aim+i),*(target+i),ROWS);
    }
}
void print(const double target[COLS][ROWS],int n,int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%03.1f ",target[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    double aim[COLS][ROWS] = {{1.0,2.1,3.2,4.3,5.4},{6.5,7.6,8.7,9.8,10.9},{11.2,22.3,33.4,44.5,55.6}},target[COLS][ROWS];
    strccpy(aim,target,COLS);
    print(target,COLS,ROWS);
    return 0;
}