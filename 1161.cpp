#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	double a,b,c,x1,x2,t;
	scanf("%lf%lf%lf",&a,&b,&c);
	x1=(-b+sqrt(b*b-4*a*c))/(2*a);
	x2=(-b-sqrt(b*b-4*a*c))/(2*a);
	if(x1<x2)
	{
		t=x1;
		x1=x2;
		x2=t;
	}
	printf("%.2lf %.2lf",x1,x2);
	system("pause");
	return 0;
}