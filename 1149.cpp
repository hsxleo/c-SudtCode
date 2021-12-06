#include <stdio.h>
#include <stdlib.h>
int f(int m,int n);
int main()
{
	int t;
	int i;
	int m,n;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d%d",&m,&n);
		printf("%d\n",f(m,n));
	}
	system("pause");
	return 0;
}
int f(int m,int n)
{
	int x;
	if(m==1)
	{
		x=n;
		return x;
	}
	if(n==1)
	{
		x=m;
		return x;
	}
	if(m>1&&n>1)
	{
		x=f(m-1,n)+f(m,n-1);
		return x;
	}
}