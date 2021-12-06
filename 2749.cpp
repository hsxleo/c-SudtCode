#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	int x,y,x1,x2,y1,y2;
	int a,i;
	while(scanf("%d",&n)!=-1)
	{
		a=0;
		scanf("%d%d",&x1,&y1);
		scanf("%d%d",&x2,&y2);
		for(i=1;i<=n;i++)
		{
			scanf("%d%d",&x,&y);
			if(x>x1&&y>y1&&x<x2&&y<y2)
			{
				a++;
			}
		}
		printf("%d\n",a);
	}
	system("pause");
	return 0;
}