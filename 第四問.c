#include<stdio.h>
int main()
{
    int i;
    char str1[100];
    char str2[100];

    printf("����������");
    scanf("%s",str1);
    for(i=0;str1[i];i++)
      str2[i]=str1[i];
    str2[i]='\0';
    printf("�R�s�[���ꂽ������:%s\n",str2);
}