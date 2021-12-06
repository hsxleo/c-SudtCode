/*************************
制作人：黄士祥
制作日期：2019.10.20
制作内容：相似三角形
*************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a1,b1,c1,a2,b2,c2,t;
	while(scanf("%d%d%d%d%d%d",&a1,&b1,&c1,&a2,&b2,&c2)!=EOF)
	{
		if(a1+b1>c1&&a1+c1>b1&&b1+c1>a1&&a2+b2>c2&&a2+c2>b2&&b2+c2>a2)
		{
			if(a1<b1){t=a1;a1=b1;b1=t;}
			if(a1<c1){t=a1;a1=c1;c1=t;}
			if(b1<c1){t=b1;b1=c1;c1=t;}
			if(a2<b2){t=a2;a2=b2;b2=t;}
			if(a2<c2){t=a2;a2=c2;c2=t;}
			if(b2<c2){t=b2;b2=c2;c2=t;}
			if(1.0*a1/a2==1.0*b1/b2&&1.0*a1/a2==1.0*c1/c2)
				printf("YES\n");
			else
				printf("NO\n");
		}
		else
			printf("NO\n");
	}
	system("pause");
	return 0;
}