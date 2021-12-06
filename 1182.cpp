#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i;
	int year,month,day,x;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d%d",&year,&month,&day);
		if(year%4==0&&year%100!=0||year%100==0&&year%400==0)
		{
			int a[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
			for(i=1,x=0;i<month;i++)
			{
				x=x+a[i];
			}
			x=x+day;
		}
		else
		{
			int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
			for(i=1,x=0;i<month;i++)
			{
				x=x+a[i];
			}
			x=x+day;
		}
		printf("%d\n",x);
	}
	system("pause");
	return 0;
}