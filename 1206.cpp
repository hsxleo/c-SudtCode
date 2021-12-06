#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double heron(double a,double b,double c);
int main()
{
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	printf("%.3lf",heron(a,b,c));
	system("pause");
	return 0;
}
double heron(double a,double b,double c)
{
	double area,p;
	p=(a+b+c)/2;
	area=sqrt(p*(p-a)*(p-b)*(p-c));
	return area;
}
