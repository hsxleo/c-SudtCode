/********************************
�����ˣ���ʿ��
�������ڣ�2016.10.18
�������ݣ����������������ҳ����е��м���
*********************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c,mid;
	scanf("%d%d%d",&a,&b,&c);
    mid=b;
	if(mid>c&&mid>a)
		mid=c>a?c:a;
	else if(mid<c&&mid<a)
		mid=c>a?a:c; 
	printf("%d",mid);
	system("pause");
	return 0;
}