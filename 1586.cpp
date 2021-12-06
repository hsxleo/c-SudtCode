#include <stdio.h>
#include <stdlib.h>
int f(int n,int m);
int main()
{
	int N;
	int n,m;
	int i;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d%d",&n,&m);
		printf("%d\n",f(n,m));
	}
	system("pause");
	return 0;
}
int f(int n,int m)
{
	if(m==0)
		return 1;
	else if(n==1)
		return 1;
	else if(m==n)
		return 1;
	else
		return f(n-1,m-1)+f(n-1,m);
}