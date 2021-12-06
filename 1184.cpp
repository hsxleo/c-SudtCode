#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int t,n,i,j;
	double h,sum,h2;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%lf%d",&h,&n);
		h2=pow(0.5,n)*h;
		for(j=1;j<=n;j++)
		{
			if(j==1)
				sum=h;
			else
				sum=sum+pow(0.5,j-1)*h*2;
		}
		printf("%.2lf %.2lf\n",sum,h2);
	}
	system("pause");
	return 0;
}