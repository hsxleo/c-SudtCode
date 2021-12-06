#include <stdio.h>
#include <stdlib.h>
int main()
{
	int r,c;
	int i,j,a[10][10],b[10][10];
	while(scanf("%d%d",&r,&c)!=-1)
	{
		for(i=0;i<r;i++)
		    for(j=0;j<c;j++)
			    scanf("%d",&a[i][j]);
	    for(i=0;i<c;i++)
		    for(j=0;j<r;j++)
			    b[i][j]=a[r-j-1][i];
	    for(i=0;i<c;i++)
	        for(j=0;j<r;j++)
		    {
			     printf("%d",b[i][j]);
			     if(j<r-1)
				     printf(" ");
			     if(j==r-1)
				     printf("\n");
		    }
	}
	system("pause");
	return 0;
}