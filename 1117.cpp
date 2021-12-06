/*****************************************************
制作人：黄士祥
制作日期：2019.10.14
制作内容：从键盘上输入任意一个整数，然后输出它的绝对值！
******************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	b=abs(a);
	printf("%d",b);
system("pause");
return 0;
}