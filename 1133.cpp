/***********************************************
�����ˣ���ʿ��
�������ڣ�2019.10.19
�������ݣ���������������һ������������������
************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,result;
	char op;
	scanf("%d%d\n%c",&a,&b,&op);
	switch(op)
	{
	case '+':
			printf("%d",a+b);
			break;
	case '-':
			printf("%d",a-b);
			break;
	case '*':
			printf("%d",a*b);
			break;
	case '/':
				if(b!=0)
			    printf("%d",a/b);
				else
				printf("���ݲ��Ϸ�");
			break;
	default :
				printf("��������");

	}
	system("pause");
	return 0;
}