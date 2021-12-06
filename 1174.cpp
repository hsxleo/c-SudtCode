/******************************
制作人：黄士祥
制作日期：2019.20.23
制作内容：打印菱形
******************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,t,j,m,p,q;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(t=1;t<=n-i;t++)
		{
		printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(m=n+1;m<=2*n-1;m++)
	{
		for(p=n+1;p<=m;p++)
		{
			printf(" ");
		}
		for(q=1;q<=4*n-2*m-1;q++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}