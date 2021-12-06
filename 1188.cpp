#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,m,t;
	int i,j,a[11];
	while(scanf("%d",&n)!=-1&&n!=0)
	{
		int b[11]={0};
		for(i=1;i<n+1;i++)
		{
            scanf("%d",&a[i]);
			t=a[i];
            while(t)
			{
				m=t%10;
				b[i]=b[i]+m;
				t=t/10;
			}
		}
		/*for(i=1;i<n+1;i++)
		{
			printf("%d ",a[i]);
			printf("%d ",b[i]);
		}*/
		for(i=1;i<n;i++)
		{
			for(j=i+1;j<n+1;j++)
			{
				if(b[i]>b[j])
				{
					t=b[i];b[i]=b[j];b[j]=t;
					t=a[i];a[i]=a[j];a[j]=t;
				}
			}
		}
		for(i=1;i<n+1;i++)
		{
			printf("%d",a[i]);
			if(i<n)
				printf(" ");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}