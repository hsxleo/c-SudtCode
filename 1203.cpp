/*****************************
制作人:黄士祥
日期：2019.10.13
制作内容：n元钱买几块糖剩多少钱
******************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,num,rem;//num为可以买的糖数，rem为余数
scanf("%d",&n);
num=10*n/3;
rem=10*n%3;
printf("%d %d",num,rem);
system("pause");
return 0;
}