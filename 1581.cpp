#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,sum=0;
	int a[101];
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf("%d\n",sum);
	system("pause");
	return 0;
}