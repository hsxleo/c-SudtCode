#include <stdio.h>
#include <stdlib.h>
int main()
{
	char a[100],b[100];
	int i,j,t;
	while(1)
	{
		i=0;
		a[i]=getchar();
		if(a[i]<='9'&&a[i]>='0')
		{
			b[i]=105-a[i];
		}
		else if(a[i]>='A'&&a[i]<='Z')
		{
			b[i]=a[i]+32;
		}
		else if(a[i]>='a'&&a[i]<='z')
		{
			b[i]=a[i]-32;
		}
		else if(a[i]=='\n')
			break;
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%c",b[j]);
	}
	system("pause");
	return 0;
}