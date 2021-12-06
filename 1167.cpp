/****************************9*******
制作人：黄士祥
制作日期：2019.10.13
制作内容；求三个整数的和、乘积和平均数
*************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int a,b,c,sum,pro;
	float ave;//sum为和，pro为积，ave为平均数
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c;
	pro=a*b*c;
	ave=sum/3.0;
	printf("%d %d %.2f",sum,pro,ave);
system("pause");
return 0;
}