#include<stdio.h>
int main()
{
    int num,i,flag=1;
    do
    {
        printf("2以上の整数:");
        scanf("%d",&num);
    }while(num<1);
    for(i=2;i<num;i++)
        if(!(flag=num%i)) break;
    if(flag) printf("素数\n");
    else printf("合成数\n");
}