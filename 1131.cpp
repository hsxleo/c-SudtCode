/******************************************
�����ˣ���ʿ��
�������ڣ�2019.10.21
�������ݣ����Լ������С������
*******************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y,m,n;
	scanf("%d%d",&x,&y);
	m=x*y;
	while(y!=0)
	{
		n=x%y;
		x=y;
		y=n;
	}
	printf("%d\n%d\n",x,m/x);
	system("pause");
	return 0;
}