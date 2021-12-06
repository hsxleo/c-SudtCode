#include <stdio.h>
#include <stdlib.h>
void f(int x,int y,int z);
int main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	f(a,b,c);
	f(a,b,d);
	f(a,c,d);
	f(b,c,d);
	system("pause");
	return 0;
}
void f(int x,int y,int z)
{
	printf("%d %d %d\n",x,y,z);
	printf("%d %d %d\n",x,z,y);
	printf("%d %d %d\n",y,x,z);
	printf("%d %d %d\n",y,z,x);
	printf("%d %d %d\n",z,x,y);
	printf("%d %d %d\n",z,y,x);
}
