/****************************
�����ˣ���ʿ��
�������ڣ�2019.10.21
�������ݣ�쳲���������
****************************/
#include <stdio.h>
#include <stdlib.h>
long Fib(int n);
int main()
{
	int n,x;
	scanf("%d",&n);
		x=Fib(n);
		printf("%d\n",x);
	system("pause");
	return 0;
}
long Fib(int n)
{
	if(n==1)
		return 1;
	else if(n==2)
		return 1;
	else return (Fib(n-1)+Fib(n-2));
}