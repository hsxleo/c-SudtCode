/**********************************************
制作人：黄士祥
制作日期：2019.10.20
制作内容：求1到n范围内能被5或6或8整除的数的个数
**********************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,num;
	while(scanf("%d",&n)!=EOF)
	{
		num=n/5+n/6+n/8-n/30-n/40-n/24+n/120;
		printf("%d\n",num);
	}
	system("pasue");
	return 0;
}