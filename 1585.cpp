#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int i,j;
	int flag,count=0;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		flag=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			count++;
		}
	}
	printf("%d\n",count);
	system("pause");
	return 0;
}