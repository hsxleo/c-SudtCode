/******************************************************************
�����ˣ���ʿ��
�������ڣ�2019.10.14
�������ݣ�������������a��b��c��Ҫ����������ݰ��Ӵ�С��������
******************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c,t;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		t=a;
	    a=b;
		b=t;
	}
	if(a<c)
	{
		t=a;
        a=c;
		c=t;
	}
	if(b<c)
	{
		t=b;
	    b=c;
		c=t;
	}
	printf("%d %d %d",a,b,c);
system("pause");
return 0;
}