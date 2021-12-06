#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void num_split(int a[],int n,int *pm);
int Prime(int n);
int main()
{
	int n,m,n2,i;
	int *pm;
	int a[10000];
	pm=&m;
	while(scanf("%d",&n)!=-1,n)
	{
		n2=0;
		if(Prime(n)==0)
			printf("False\n");
		else
		{
			num_split(a,n,pm);
			for(i=0;i<*pm;i++)
			{
				n2=n2+a[*pm-1-i]*pow((double) 10,(double) i+1);
			}
			if(Prime(n2)==0)
				printf("False\n");
			else
				printf("True\n");
		}
	}
	system("pause");
	return 0;
}
int Prime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;

}
void num_split(int a[],int n,int *pm)
{
	int i=0;
	int x,t;
	t=n;
	while(t)
	{
		x=n%10;
		a[i]=x;
		i++;
		n=n/10;
		t=t/10;
	}
	*pm=i;
}