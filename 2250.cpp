/*****************************
�����ˣ���ʿ��
�������ڣ�2019.10.29
�������ݣ��򵥼���
*****************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int N,T[200],i,ave=0,t;
	scanf("%d",&N);
	for(i=0;i<=N;i++)
	{
		scanf("%d",&T[i]);
		ave=ave+T[i];
		if(i>0)
		{
			if(T[i-1]<T[i])
			{
				t=T[i-1];
				T[i-1]=T[i];
				T[i]=t;
			}
		}
	}
	printf("%d %d %d",T[0],T[N],ave/N);
	system("pause");
	return 0;
}