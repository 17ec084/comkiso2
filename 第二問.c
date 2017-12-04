#include<stdio.h>
int main()
{
    int num,i,flag=1;
    do
    {
        printf("2ˆÈã‚Ì®”:");
        scanf("%d",&num);
    }while(num<1);
    for(i=2;i<num;i++)
        if(!(flag=num%i)) break;
    if(flag) printf("‘f”\n");
    else printf("‡¬”\n");
}