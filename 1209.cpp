/******************************
制作人：黄士祥
制作日期：2019.10.20
制作内容：求实数的绝对值 
*******************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	float a;
	while(scanf("%f",&a)!=EOF)
	{
		a=abs(a);
		printf("%.2f\n",a);
	}
	system("pause");
	return 0;
}