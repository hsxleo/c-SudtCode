#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,i;
	long long sum[91];
	while(scanf("%d",&n),n)
	{
		sum[1]=1;
		sum[2]=2;
		if(n==1)
			sum[1]=1;
		else if(n==2)
			sum[2]=2;
		else if(n>2)
		{
			for(i=3;i<=n;i++)
			{
				sum[i]=sum[i-2]*2+sum[i-1]-sum[i-2];
			}
		}
		printf("%lld\n",sum[n]);
	}
	system("pause");
	return 0;
}
