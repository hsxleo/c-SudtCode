/****************************
制作人：黄士祥
制作日期：2019.10.24
制作内容：打印数字图形
*****************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(j=i-1;j>0;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	for(i=n-1;i>0;i--)
	{
		for(j=n-1;j>=i;j--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(j=i-1;j>0;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}