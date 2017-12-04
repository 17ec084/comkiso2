#include<stdio.h>
int main()
{
    int num1,num2,tmp;
    do
    {
        printf("1ŒÂ–Ú‚Ì©‘R”:");
        scanf("%d",&num1);
    }while(num1<0);
    do
    {
        printf("2ŒÂ–Ú‚Ì©‘R”:");
        scanf("%d",&num2);
    }while(num2<0);
    while(num2)
    {
        tmp=num2;
        num2=num1%num2;
        num1=tmp;
    }
    printf("Å‘åŒö–ñ”‚Í%d\n",num1);
}