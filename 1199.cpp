#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int n;
	double x,p,i;
	scanf("%lf%d",&x,&n);
	p=sqrt(1+x);
	for(i=2;i<=n;i++)
	{
		p=i+p;
		p=sqrt(p);
	}
	printf("%.2lf\n",p);
	system("pause");
	return 0;
}
