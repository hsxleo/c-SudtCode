/******************************
�����ˣ���ʿ��
�������ڣ�2019.20.23
�������ݣ��������
******************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int n,s=0,a,p=0,t;
	scanf("%d%d",&a,&n);
		for(t=0;t<n;t++)
		{
			p=p+(double)pow((double)10,(double)t);
			s=s+a*p;
		}
		printf("%d\n",s);
	system("pause");
	return 0;
}