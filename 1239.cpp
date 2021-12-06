/*****************************
制作人：黄士祥
制作日期：2019.10.24
制作内容：水仙花数
******************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int m,n,i,g,sh,b,a[1000],c=0;
	while(scanf("%d%d",&m,&n)!=-1)
	{
	     for(i=m;i<=n;i++)
	     {
		    g=i%10;
		    sh=i/10%10;
		    b=i/100;
		    if(i==g*g*g+sh*sh*sh+b*b*b)
			{
				a[c]=i;
				c++;
			}
		 }
	     if(c==0)
		     printf("no\n");
		 else
		 {
			for(i=0;i<c-1;i++)
		    {
				printf("%d",a[i]);
				printf(" ");
			}
			printf("%d",a[c-1]);
			printf("\n");
		 }
		 c=0;
	}
	system("pause");
	return 0;
}