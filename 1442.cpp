/***********************************************************************************
制作人：黄士祥
制作日期：2019.10.20
制作内容：给定3个数，如果有两个数大于他们的平均数则称这组数为优越数。（定义纯属虚构）
************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c,x;
	float average;
	scanf("%d",&x);
	while(scanf("%d%d%d",&a,&b,&c)!=EOF)
	{
		average=(a+b+c)/3.0;
		if(average<a&&average<b||average<a&&average<c||average<b&&average<c)
			printf("Yes\n");
		else
			printf("No\n");
	}

	system("pause");
	return 0;
}