#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,m;
	int i,sum;
	int t;
	while(scanf("%d%d",&n,&m)!=-1)
	{
		sum=0;
		t=0;
		for(i=1;i<=n;i++)
		{
			sum=sum+2*i;
			if(i%m==0&&i!=n)
			{
				printf("%d ",sum/m);
				sum=0;
				t=i;
			}
			else if(i==n)
			{
				printf("%d\n",sum/(n-t));
			}
		}
	}
	system("pause");
	return 0;
}