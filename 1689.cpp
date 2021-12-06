#include <stdio.h>
#include <stdlib.h>
int fib(int n);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",fib(n));
	system("pause");
	return 0;
}
int fib(int n)
{
	if(n==1)
		return 2;
	else if(n==2)
		return 3;
	else if(n==3)
		return 5;
	else
		return fib(n-1)+fib(n-2)-fib(n-3);

}