#include<stdio.h>
int main()
{
    int i;
    char str1[100];
    char str2[100];

    printf("文字列を入力");
    scanf("%s",str1);
    for(i=0;str1[i];i++)
      str2[i]=str1[i];
    str2[i]='\0';
    printf("コピーされた文字列:%s\n",str2);
}