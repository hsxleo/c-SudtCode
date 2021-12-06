#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int a,b,g,sh,c;
	int i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d",&a,&b);
		if(a>=100)
		{
			g=a%10;
			sh=a/10%10;
			a=sh*10+g;
		}
		if(b>=100)
		{
			g=b%10;
			sh=b/10%10;
			b=sh*10+g;
		}
		c=a+b;
		if(c>=100)
		{
			g=c%10;
			sh=c/10%10;
			c=sh*10+g;
		}
		printf("%d\n",c);
	}
	system("pause");
	return 0;
}