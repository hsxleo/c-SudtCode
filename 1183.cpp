/****************************************
制作人：黄士祥
制作日期:2019.10.19
制作内容：三个整数x,y,z把他们由大到小排序
****************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x,y,z,t;
	scanf("%d,%d,%d",&x,&y,&z);
	if(x<y)
	{
		t=x;
		x=y;
		y=t;
	}
	if(x<z)
	{
		t=x;
		x=z;
		z=t;
	}
	if(y<z)
	{
		t=y;
		y=z;
		z=t;
	}
	printf("%d %d %d",z,y,x);
	system("pause");
	return 0;
}