/*****************************************
�����ˣ���ʿ��
�������ڣ�2019.10.21
�������ݣ��ж�����
******************************************/
#include <stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	if(n==1)
		printf("This is not a prime.");
	else if(n==2)
		printf("This is a prime.");
	else
	{
		for(i=2;i<n;i++)
		{
			if(n%i==0)
				break;
		}
		if(i==n)
			printf("This is a prime.");
		else
			printf("This is not a prime.");
	}
	system("pause");
	return 0;
}