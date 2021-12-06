#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int i;
	int a,b,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&a,&b,&c);
		if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
			printf("Yes\n");
		else
			printf("No\n");
	}
	system("pause");
	return 0;
}
