#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[11],b[11];
	int i,j,t,k,m,n,min;
	for(i=1,j=1;i<11;i++,j++)
	{
		scanf("%d",&a[i]);
		b[i]=j;
	}
		
	for(i=1;i<11;i++)
	{
		for(j=i+1;j<11;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];a[i]=a[j];a[j]=t;
				t=b[j];b[j]=b[i];b[i]=t;
			}
		}
	}
	for(i=1;i<10;i++)
		printf("%d ",a[i]);
	printf("%d",a[10]);
	printf("\n");
	for(i=1;i<10;i++)
		printf("%d ",b[i]);
	printf("%d",b[10]);
	system("pause");
	return 0;
}