/*******************************************
�����ˣ���ʿ��
�������ڣ�2019.10.14
�������ݣ���������������������е����ֵ���
*******************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c;
	scanf("%d,%d,%d",&a,&b,&c);
	int max=a;
	if(max<b)
		max=b;
	if(max<c)
		max=c;
	printf("max=%d",max);
system("pause");
return 0;
}
