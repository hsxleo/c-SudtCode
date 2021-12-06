#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	int a[10];
	int i,x,y,t1,t2;
	int max,min;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			x=i;
		}
		if(a[i]>max)
		{
			max=a[i];
			y=i;
		}
	}
	t1=a[0];
	a[0]=a[x];
	a[x]=t1;
	t2=a[n-1];
	a[n-1]=a[y];
	a[y]=t2;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	system("pause");
	return 0;
}