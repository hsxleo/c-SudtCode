/****************************
�����ˣ���ʿ��
�������ڣ�2019.10.20
�������ݣ��ֶκ���
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