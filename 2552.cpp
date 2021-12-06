#include <stdio.h>
#include <stdlib.h>
int main()
{
	int N,n=0,i=1,x;
	scanf("%d",&N);
    while(n<=N)
	{
		n=n+i*i;
		i++;
	}
	printf("%d",i-2);
	system("pause");
	return 0;
}