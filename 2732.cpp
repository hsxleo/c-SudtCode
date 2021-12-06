/******************************
制作人：黄士祥
制作日期：2019.10.19
制作内容：计算a+b
******************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c;
	scanf("%d%d\n%d",&a,&b,&c);
	if(c==a+b)
		printf("YES");
	else
		printf("NO");
	system("pause");
	return 0;
}
