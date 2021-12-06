/**********************************
制作人：黄士祥
制作日期：2019.20.23
制作内容：分数序列
**********************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,a=2,b=3,i;
	double sum;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i==1)
		    sum=2;
		if(i==2)
			sum=2+3*1.0/2;
		if(i>2)
		{
			for(i>2;i<=n;i++)
		{
			if(i%2!=0)
			{
			a=a+b;
			sum=sum+a*1.0/b;
			}
			if(i%2==0)
			{
			b=a+b;
			sum=sum+b*1.0/a;
			}
		}
		}
	}
	printf("%.6lf",sum);
	system("pause");
	return 0;
}