#include<stdio.h>
int main()
{
    int i;
    char str1[100];

    printf("文字列を入力");
    scanf("%s",str1);
    for(i=0;str1[i];i++)
    ;
    for(i--;i>=0;i--)
        printf("%c",str1[i]);
}