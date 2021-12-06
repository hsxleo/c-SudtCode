#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int a[100000];
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			printf("even\n");
		}
		else
			printf("odd\n");
	}
	system("pause");
	return 0;
}