/****************************9*******
�����ˣ���ʿ��
�������ڣ�2019.10.13
�������ݣ������������ĺ͡��˻���ƽ����
*************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int a,b,c,sum,pro;
	float ave;//sumΪ�ͣ�proΪ����aveΪƽ����
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c;
	pro=a*b*c;
	ave=sum/3.0;
	printf("%d %d %.2f",sum,pro,ave);
system("pause");
return 0;
}