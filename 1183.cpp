/****************************************
�����ˣ���ʿ��
��������:2019.10.19
�������ݣ���������x,y,z�������ɴ�С����
****************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x,y,z,t;
	scanf("%d,%d,%d",&x,&y,&z);
	if(x<y)
	{
		t=x;
		x=y;
		y=t;
	}
	if(x<z)
	{
		t=x;
		x=z;
		z=t;
	}
	if(y<z)
	{
		t=y;
		y=z;
		z=t;
	}
	printf("%d %d %d",z,y,x);
	system("pause");
	return 0;
}