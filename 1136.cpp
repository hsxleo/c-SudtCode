#include <stdio.h>
#include <stdlib.h>
int Pn(int x);
int main()
{
	int n;
	int i;
	int j;
	scanf("%d",&n);
	for(j=2;j<n;j++)
	{
		if(Pn(j)!=0&&Pn(n-j)!=0)
		{
			printf("%d=%d+%d",n,Pn(j),Pn(n-j));
			break;
		}
	}
	system("pause");
    return 0;
}
int Pn(int x)
{
	int i;
	int flag=0;
	if(x==2)
	{
		return x;
	}
	else
	{
		for(i=2;i<x;i++)
		{
			flag=0;
			if(x%i==0)
			{
				flag=1;
				return 0;
				break;
			}
		}
		if(flag==0)
		{
			return x;
		}
	}
		
}
