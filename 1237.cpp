#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	double a[100];
	int i;
	int x,y,z;
	while(scanf("%d",&n)!=-1&&n)
	{
		x=0;y=0;z=0;
		for(i=0;i<n;i++)
		{
			scanf("%lf",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			if(a[i]<0)
			{
				x++;
			}
			else if(a[i]==0)
			{
				y++;
			}
			else if(a[i]>0)
			{
				z++;
			}
		}
		printf("%d %d %d\n",x,y,z);
	}
	system("pause");
	return 0;
}