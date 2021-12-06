#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int i;
	int a,b;
	int sum[10001];
	int max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		sum[i]=a+b;
		if(i==0)
		{
			max=sum[0];
		}
		if(max<sum[i])
		{
			max=sum[i];
		}
	}
	printf("%d\n",max);
	system("pause");
	return 0;
}