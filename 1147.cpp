/******************************
制作人：黄士祥
制作日期：2019.10.23
制作内容：求绝对值的最大值
*******************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() 
{
	int n,i,a,x,b,max;
	scanf("%d",&n);
	scanf("%d",&a);
	max=abs(a);
	x=a;
	for(i=2;i<=n;i++)
	{
		scanf("%d",&a);
		b=abs(a);
		if(max<b)
		{
			max=b;
			x=a;
		}
	}
	printf("%d",x);
	system("pause");
	return 0;
}