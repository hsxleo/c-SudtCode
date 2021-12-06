/******************************************
制作人：黄士祥
制作日期：2019.10.21
制作内容：最大公约数，最小公倍数
*******************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y,m,n;
	scanf("%d%d",&x,&y);
	m=x*y;
	while(y!=0)
	{
		n=x%y;
		x=y;
		y=n;
	}
	printf("%d\n%d\n",x,m/x);
	system("pause");
	return 0;
}