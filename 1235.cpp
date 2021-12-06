/***************************************
制作人：黄士祥
制作日期：2019.10.20
制作内容：根据输入的半径值，计算球的体积。 
****************************************/
#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415927
int main()
{
	double r,v;
	while(scanf("%lf",&r)!=EOF)
	{
		v=(4/3.0)*PI*r*r*r;
		printf("%.3lf\n",v);
	}
	system("pause");
	return 0;
}