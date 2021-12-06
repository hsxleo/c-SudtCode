/*************************************
制作人：黄士祥
制作日期：2019.10.19
制作内容：判断一个数n能否同时被3和5整除
**************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%5==0&&n%3==0)
		printf("Yes");
	else
		printf("No");
	system("pause");
	return 0;
}