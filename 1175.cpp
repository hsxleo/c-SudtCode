#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	int i;
	int t;
	int flag=0;
	int a[10];
	scanf("%d",&n);
	while(n)
	{
		t=n%10;
		n=n/10;
		a[flag]=t;
		flag++;
	}
	for(i=flag-1;i>0;i--)
	{
		printf("%d ",a[i]);
	}
	printf("%d",a[0]);
	system("pause");
	return 0;
}