/*****************************
制作人：黄士祥
制作日期：2019.10.23
制作内容：求阶乘
*****************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,p=1;
	scanf("%d",&n);
	if(n==0)
		printf("1");
	else
	{
		for(i=1;i<=n;i++)
		{
			p=p*i;
		}
		printf("%d",p);
	}
	system("pause");
	return 0;
}