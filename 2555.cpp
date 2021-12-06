/*************************
制作人：黄士祥
制作日期：2019.10.20
制作内容：压岁钱
*************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int T,N;
	scanf("%d",&T);
	while(scanf("%d",&N)!=EOF)
	{
		if(1000000%N==0)
			printf("%d\n",1000000/N);
		else
			printf("No\n");
	}
	system("pause");
	return 0;
}