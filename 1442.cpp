/***********************************************************************************
�����ˣ���ʿ��
�������ڣ�2019.10.20
�������ݣ�����3������������������������ǵ�ƽ�������������Ϊ��Խ���������崿���鹹��
************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c,x;
	float average;
	scanf("%d",&x);
	while(scanf("%d%d%d",&a,&b,&c)!=EOF)
	{
		average=(a+b+c)/3.0;
		if(average<a&&average<b||average<a&&average<c||average<b&&average<c)
			printf("Yes\n");
		else
			printf("No\n");
	}

	system("pause");
	return 0;
}