#include <stdio.h>
#include <stdlib.h>

int main()
{
	double n;
	while(scanf("%lf",&n)!=-1)
	{
		if(n<0)
			n=-n;
		printf("%.2lf\n",n);
	}
	system("pause");
	return 0;
}