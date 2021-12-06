#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double f(double n,double m);
int main()
{
	double n,m;
	while(scanf("%lf%lf",&n,&m)!=-1)
	{
		printf("%.2lf\n",f(n,m));
	}
	system("pause");
	return 0;
}
double f(double n,double m)
{
	double sum=n;
	int i;
	for(i=2;i<=m;i++)
	{
		sum=sum+sqrt((double)n);
		n=sqrt((double)n);
	}
	return sum;
}