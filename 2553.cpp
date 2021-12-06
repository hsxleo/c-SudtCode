#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,j,b,sum;
	int flag;
	while(scanf("%d",&n)!=-1)
	{
		flag=0;
		sum=0;
		if(n==1)
			printf("NO\n");
		else if(n==2)
			printf("YES\n");
		else
		{
			for(i=2;i<n;i++)
			{
				if(n%i==0)
				{
					flag=1;
					printf("NO\n");
					break;
				}
			}
			if(flag==0)
			{
				while(n)
				{
					b=n%10;
					n=n/10;
					sum=sum+b;
				}
				for(i=2;i<sum;i++)
				{
					if(sum%i==0)
					{
						flag=1;
						printf("NO\n");
						break;
					}
				}
				if(flag==0)
					printf("YES\n");
			}
		}
	}
	system("pasue");
	return 0;
}