#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int i;
	double a[101];
	double sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf("%.2lf",sum/n);
	system("pause");
	return 0;
}