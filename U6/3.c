 #include<stdio.h>
 int main()
 {
    float n = 100;
    float m = 100;
    int year = 0;
    while(m <= n)
    {
        n = n + 10;
        m = m + m * 0.05;
        year++;
    }
    printf("%d年后超过，Deirdre的投资额为%lf,Daphne的投资额为%lf",year,m,n);
    return 0;
 }