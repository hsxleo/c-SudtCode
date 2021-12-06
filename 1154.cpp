/*******************************************
制作人：黄士祥
制作日期：2019.10.14
制作内容：输入三个整数，求出其中的最大值输出
*******************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c;
	scanf("%d,%d,%d",&a,&b,&c);
	int max=a;
	if(max<b)
		max=b;
	if(max<c)
		max=c;
	printf("max=%d",max);
system("pause");
return 0;
}
