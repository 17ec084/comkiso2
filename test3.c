#include<stdio.h>
int main()
{
    int num1,num2,tmp;
    do
    {
        printf("1�ڂ̎��R��:");
        scanf("%d",&num1);
    }while(num1<0);
    do
    {
        printf("2�ڂ̎��R��:");
        scanf("%d",&num2);
    }while(num2<0);
    while(num2)
    {
        tmp=num2;
        num2=num1%num2;
        num1=tmp;
    }
    printf("�ő���񐔂�%d\n",num1);
}