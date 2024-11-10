#include<stdio.h>
#include<stdlib.h>
#define SIZE 512

int main(int argc,char* argv[])
{
    FILE *f1,*f2;
    char arr[SIZE];
    if(argc != 3)
    {
        printf("Error!");
        exit(EXIT_FAILURE);
    }
    else
    {
        if((f1 = fopen(argv[1],"rb")) == NULL)
    {
        exit(EXIT_FAILURE);
    }
    if((f2 = fopen(argv[2],"wb")) == NULL)
    {
        exit(EXIT_FAILURE);
    }
    }
    size_t bytes;
    while(bytes = fread(arr,sizeof(char),SIZE,f1) > 0)
    {
        fwrite(arr,sizeof(char),bytes,f2);
    }
    fclose(f1);
    fclose(f2);
    printf("文件复制成功！！！");
    return 0;
}