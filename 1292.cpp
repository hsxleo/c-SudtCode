#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j;
	int n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			if(j==2*i-1)
				printf("%c\n",'A'-1+i);
			else
				printf("%c",'A'-1+i);
		}
	}
	for(i=n-1;i>=0;i--)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			if(j==2*i-1)
				printf("%c\n",'A'-1+i);
			else
				printf("%c",'A'-1+i);
		}
	}
	system("pause");
	return 0;
}