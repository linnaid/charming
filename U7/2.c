#include <stdio.h>
#define y 2.5;
#define t 1.15;
#define r 1.09;
int main()
{
    char ch;
    int a,b,c,A,B,C;
    scanf("%c",&ch);
    while(ch != 'q')
    {
        switch(ch)
        {
            case 'a':
             {
                scanf("%d",&a);
                A = A + a;
                break;

             }
            case 'b':
             {
                scanf("%d",&b);
                B = B + b;
                break;
             }
            case 'c':
             {
                scanf("%d",&c);
                C = C + c;
                break;
             }
             case 'q':
             {
                break;
             }
        }
        scanf("%c",&ch);

    }
    printf("洋蓟售价为 2.05 美元/磅\n甜菜售价为 1.15美元/磅\n胡萝卜售价为1.09美元/磅\n");
    printf("订购了洋蓟%d磅\n订购了甜菜%d磅\n订购了胡萝卜%d磅\n",A,B,C);
    double sum1 = A*y + B*t + C*r;
    int sum2 = A + B + C;
    double count = 0;
    double you,SUM;
    if(sum1 >= 100)
    {
        count = sum1 * 0.05;
    }
    if(sum2 <= 5)
    {
        you = 6.5;
    }
    else if(sum2 > 5 && sum2 <= 20)
    {
        you = 14;
    }
    else if(sum2 > 20)
    {
        you = 14 + (sum2 - 20);
    }
    SUM = sum1 + you - count;
    printf("订购了%d磅蔬菜，订单花费%.2f元，折扣为%.2f元，运费和包装费为%.2f元，总计%.2f元",sum2,sum1,count,you,SUM);
    return 0;
}