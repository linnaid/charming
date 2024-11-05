#include <stdio.h>
int one_three(void)
{
    printf("one\n");
    two();
    printf("three\n");
}
int two(void)
{
    printf("two\n");
}
int main()
{
    printf("starting now\n");
    one_three();
    printf("Done!\n");
    return 0;
}