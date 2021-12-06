#include <stdio.h>
#include <stdlib.h>
int f(int n);
int main()
{
	int t;
	int n,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d",&n);
		printf("%d\n",f(n));
	}
	system("pause");
	return 0;
}
int f(int n)
{
	if(n==1)
		return 0;
	else if(n==2)
		return 1;
	else
		return 4*f(n-1)-5*f(n-2);
}