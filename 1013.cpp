/***************************
制作人：黄士祥
制作日期：2019.10.22
制作内容：A+B(lv)
***************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,x,sum;
	while(scanf("%d",&n)!=EOF)
	{
		sum=0;
		if(n==0)
			break;
		else 
		{
			for(i=1;i<=n;i++)
			{
		       scanf("%d",&x);
			   sum=x+sum;
			}
			printf("%d\n",sum);
		}
	}
	system("pause");
	return 0;
}