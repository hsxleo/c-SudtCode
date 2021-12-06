/********************************
制作人：黄士祥
制作日期：2016.10.18
制作内容：输入三个整数，找出其中的中间数
*********************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c,mid;
	scanf("%d%d%d",&a,&b,&c);
    mid=b;
	if(mid>c&&mid>a)
		mid=c>a?c:a;
	else if(mid<c&&mid<a)
		mid=c>a?a:c; 
	printf("%d",mid);
	system("pause");
	return 0;
}