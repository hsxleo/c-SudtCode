/*****************************************************************
制作人：黄士祥
制作日期：2019.10.18
制作内容：输入三个整数a,b,c。并进行两两相加，最后比较相加和的最大值
******************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c,m,n,sum;
	//printf("输入三个整数，用空格分开");
	scanf("%d%d%d",&a,&b,&c);
	if(a<c||a<b)
	{
		m=a>b?a:b;
		n=a>c?a:c;
    }	
	else
	{
		m=b>=c?b:c;
	    n=a;
	}
	sum=n+m;
	printf("%d",sum);
	system("pause");
	return 0;
}