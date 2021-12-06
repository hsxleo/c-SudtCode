#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,m;
	int i,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(i=n-m;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<n-m;i++)
	{
		printf("%d ",a[i]);
	}
	system("pause");
	return 0;
}