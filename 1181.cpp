/************************************
�����ˣ���ʿ��
�������ڣ�2019.10.30
�������ݣ���С�����������Լ��
*************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,t,m;
	scanf("%d%d",&a,&b);
	if(a<b){t=a;a=b;b=t;}
	m=a*b;
	while(a!=0)
	{
		t=a%b;
		b=a;
		a=t;
	}
	printf("%d %d",m/b,b);
	system("pause");
	return 0;
}