/**************************
制作人：黄士祥
制作日期：2019.10.19
制作内容：求两个整数的最大值
****************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	a=a>b?a:b;
	printf("max=%d",a);
	system("pause");
	return 0;
}