#include<stdio.h>

void ARR(char *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        arr[i] = getchar();
        if(arr[i] == '\n'||arr[i] == '\t'||arr[i] == ' ')
        break;
        else if(arr[i] == EOF)
        break;
        printf("%c ",arr[i]);
    }
}
int main()
{
    int n = 23;
    char arr[23] = {0};
    ARR(arr,n);
}