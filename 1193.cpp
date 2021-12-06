/*******************************
制作人：黄士祥
制作日期：2019.10.22
制作内容：圆周率
*******************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i;
	double pi=0.0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	     pi=pi+1.0/(4*i-3)-1.0/(4*i-1);
	}
	printf("%.5lf",pi*4);
	system("pause");
	return 0;
}