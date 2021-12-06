#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,C,E,M;
	int i,j,t,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&C,&M,&E);
		a[i]=C+M+E;
	}
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	system("pause");
	return 0;
}