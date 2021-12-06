#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	int i,j,k,a[20],t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			for(j=0;j<n-1;j++)
	        {
		        printf("%d ",a[j]);
	        }
			printf("%d",a[n-1]);
	        printf("\n");
		}
		else
		{
			t=a[n-1];
			for(k=n-1;k>0;k--)
			{
				a[k]=a[k-1];
			}
			a[0]=t;
			for(j=0;j<n-1;j++)
			{
				printf("%d ",a[j]);
			}
			printf("%d",a[n-1]);
			printf("\n");
		}
	}
	system("pause");
	return 0;
}