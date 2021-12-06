/********************************
制作人：黄士祥
制作日期：2016.10.18
制作内容：两个整数，求其中的较大者
*********************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,max;
	scanf("%d%d",&a,&b);
	max=a;
	if(a<b)
		max=b;
		printf("max=%d",max);
	system("pause");
	return 0;
}