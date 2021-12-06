#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	int i,j,sum=0;
	int a[10][10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
		for(j=0;j<i+1;j++)
			sum=sum+a[i][j];
	printf("%d\n",sum);
	system("pause");
	return 0;
}