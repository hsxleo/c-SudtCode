/********************************
制作人：黄士祥
制作日期：2019.10.19
制作内容:输入星期然后输出英文
*********************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x;
	scanf("%d",&x);
	switch(x)
	{
	case 1:
		printf("Monday");
		break;
	case 2:
		printf("Tuesday");
		break;
	case 3:
		printf("Wednesday");
		break;
	case 4:
		printf("Thursday");
		break;

	case 5:
		printf("Friday");
	    break;
	case 6:
		printf("Saturday");
		break;
	case 7:
		printf("Sunday");
		break;
	default :
		printf("输入不合法");
		
	}
	system("pause");
	return 0;
}