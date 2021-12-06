#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int m,n;
	int i,j;
	double sum;
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		sum=0;
		scanf("%d",&n);
		for(j=1;j<=n;j++)
		{
			sum=sum+pow(-1.0,j+1)*1.0/j;
		}
		printf("%.2lf\n",sum);
	}

	system("pause");
	return 0;
}