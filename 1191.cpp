#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,flag=0;
	int i,t,a[5];
	scanf("%d",&n);
	t=n;
	while(n)
	{
		n=n/10;
		flag++;
	}
	printf("%d\n",flag);
	for(i=flag-1;i>=0;i--)
	{
		a[i]=t%10;
		t=t/10;
	}
	for(i=0;i<flag-1;i++)
	{
		printf("%d ",a[i]);
	}
	printf("%d\n",a[flag-1]);
	for(i=flag-1;i>0;i--)
	{
		printf("%d ",a[i]);
	}
	printf("%d\n",a[0]);
	system("pause");
	return 0;
}