#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592653
int main()
{
	int n;
	int r;
	int i;
	double s;
	int count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&r);
		s=PI*r*r;
		count++;
		printf("Case %d: %.2lf\n",count,s);
	}
	system("pause");
	return 0;
}