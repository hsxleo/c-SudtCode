/*****************************
�����ˣ���ʿ��
�������ڣ�2019.10.23
�������ݣ���׳�
*****************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,p=1;
	scanf("%d",&n);
	if(n==0)
		printf("1");
	else
	{
		for(i=1;i<=n;i++)
		{
			p=p*i;
		}
		printf("%d",p);
	}
	system("pause");
	return 0;
}