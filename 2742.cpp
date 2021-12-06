/********************************
制作人：黄士祥
制作日期：2019.10.20
制作内容：洗衣服
********************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int L,W;
	while(scanf("%d%d",&L,&W)!=EOF)
	{
		printf("%d\n",L/W);
	}
	system("pause");
	return 0;
}