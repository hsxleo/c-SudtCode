#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[10];
	int i,t,j;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<5;j++)
	{
		t=a[j];
		a[j]=a[9-j];
		a[9-j]=t;
	}
	for(i=0;i<9;i++)
	{
		printf("%d ",a[i]);
	}
	printf("%d\n",a[9]);
	system("pause");
	return 0;
}