/*********************************
�����ˣ���ʿ��
�������ڣ�2019.10.15
�������ݣ�����
*********************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int year
	scanf("%d",&year);
	if(year%4==0&&year%100!=0||year%4==0&&year%100==0&&year%400==0)
	printf("Yes");
	else
    printf("No");
	system("pause");
return 0;
}