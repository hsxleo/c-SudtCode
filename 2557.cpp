#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double piecewise(double x);
int main()
{
	int n,i;
	double x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf",&x);
		printf("%.2lf\n",piecewise(x));
	}
	system("pause");
	return 0;
}
double piecewise(double x)
{
	double t;
	if(x>0&&x<10)
		t=log(x)/log(2.0);
	else if(x<0)
		t=abs(x)+sin(x);
	else if(x==0)
		t=0;
	else
		t=x*x;
	return t;

}