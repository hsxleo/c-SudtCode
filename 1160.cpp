/************************************
制作人：黄士祥
制作日期：2019.10.18
制作内容：输入年和月，判断该月有几天？
*************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int year,month;
	scanf("%d\\%d",&year,&month);
	switch(month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("31");
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("30");
		break;
	case 2:
		if(year%400==0||year%4==0&&year%100!=0)
			printf("29");
		//else if(year%4==0&&year%100!=0)
			//printf("29");
		else 
			printf("28");
		break;
	default :
		printf("输入数据不合法");
	}
system("pause");
return 0;
}
