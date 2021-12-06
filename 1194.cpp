/**********************************
制作人：黄士祥
制作日期：2019.10.30
制作内容：余弦
***********************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double Fac(int i1);
int main()
{
	double x,y,z,p;
	int i,n;
	while(scanf("%lf%d",&x,&n)!=-1)
	{
		for(i=1,y=1,z=1;i<=n;i++)
		{
			p=Fac(2*i);
			if(i%2==0)
			{
			//	if(x != 0)
				y=y+pow(x,2*i)/p;
			}
			else
			{
			//	if(x != 0)
				z=z-pow(x,2*i)/p;
			}
		}
		printf("%.4lf\n",y+z-1.0);
	}
	system("pasue");
	return 0;
}
double Fac(int i1)
{
	double t;
	int j;
    for(j=1,t=1;j<=i1;j++)
	{
		t=t*j;
	}
	return t;
}