#include<stdio.h>
int main()
{
    int num1,num2,tmp;
    do
    {
        printf("1個目の自然数:");
        scanf("%d",&num1);
    }while(num1<0);
    do
    {
        printf("2個目の自然数:");
        scanf("%d",&num2);
    }while(num2<0);
    while(num2)
    {
        tmp=num2;
        num2=num1%num2;
        num1=tmp;
    }
    printf("最大公約数は%d\n",num1);
}