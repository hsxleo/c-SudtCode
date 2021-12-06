/***************************************************
制作人：黄士祥
制作日期：2019.10.19
制作内容：输入多对用空格分开的两个数a b，输出a+b的和
***************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
		printf("%d\n",a+b);

	system("pause");
	return 0;
}