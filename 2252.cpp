/****************************
制作人：黄士祥
制作日期：2019.10.20
制作内容：分段函数
****************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	double x;
	while(scanf("%lf",&x)!=EOF)
	{
		if(x>0)
			printf("%.1lf\n",x*x+1);
		else if(x<0)
			printf("%.1lf\n",-x);
		else
			printf("100.0\n");
	}

	system("pasue");
	return 0;
}