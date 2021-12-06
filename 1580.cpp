/*********************************
制作人：黄士祥
制作日期：2019.10.15
制作内容：闰年
*********************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int year
	scanf("%d",&year);
	if(year%4==0&&year%100!=0||year%4==0&&year%100==0&&year%400==0)
	printf("Yes");
	else
    printf("No");
	system("pause");
return 0;
}