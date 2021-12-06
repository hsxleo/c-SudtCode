/***********************************************
制作人：黄士祥
制作日期：2019.10.19
制作内容：输入两个整数和一个运算符，输出运算结果
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
				printf("数据不合法");
			break;
	default :
				printf("输入有误");

	}
	system("pause");
	return 0;
}