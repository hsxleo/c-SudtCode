#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int a,b;
	int i,j;
	int sum,sum2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum=0;
		sum2=0;
		scanf("%d%d",&a,&b);
		for(j=1;j<a;j++)
		{
			if(a%j==0)
			{
				sum=sum+j;
			}
		}
		for(j=1;j<b;j++)
		{
			if(b%j==0)
			{
				sum2=sum2+j;
			}
		}
		if(sum==b&&sum2==a)
			printf("YES\n");
		else
			printf("NO\n");
	}
	system("pause");
	return 0;
}