#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	while(scanf("%d",&n)!=-1)
	{
		if(n>=90&&n<=100)
			printf("A\n");
		else if(n>=80&&n<=89)
			printf("B\n");
		else if(n>=70&&n<=79)
			printf("C\n");
		else if(n>=60&&n<=69)
			printf("D\n");
		else if(n>=0&&n<=59)
			printf("E\n");
		else
			printf("Score is error!\n");
	}
	system("pause");
	return 0;
}