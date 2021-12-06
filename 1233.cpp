#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char a[3],t;
	int i,j,k;
	while(scanf("%c%c%c",&a[0],&a[1],&a[2])!=-1)
	{
		for(j=0;j<2;j++)
		{
			for(k=1;k<3;k++)
			{
				if(a[k]<a[k-1])
				{
					t=a[k-1];
					a[k-1]=a[k];
					a[k]=t;
				}
			}
		}
		for(j=0;j<3;j++)
		{
			if(j==2)
				printf("%c\n",a[j]);
			else
				printf("%c ",a[j]);
		}
		getchar();
	}
	system("pause");
	return 0;
}