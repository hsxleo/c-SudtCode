/*******************
�����ˣ���ʿ��
�������ڣ�2019.10.20
�������ݣ�ֱ������ϵ
*******************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int X,Y;
	while(scanf("%d%d",&X,&Y)!=EOF)
	{
		if(X>0&&Y>0)
			printf("1\n");
		if(X>0&&Y<0)
			printf("4\n");
		if(X<0&&Y>0)
			printf("2\n");
		if(X<0&&Y<0)
			printf("3\n");
	}
	system("pause");
	return 0;
}