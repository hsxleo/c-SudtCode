/********************************
�����ˣ���ʿ��
�������ڣ�2019.10.19
��������:��������Ȼ�����Ӣ��
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
		printf("���벻�Ϸ�");
		
	}
	system("pause");
	return 0;
}