#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char str[60][20];
	char t[20];
	int score[60];
	int i,j,k,n,temp;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		scanf("%s",str[i]);
		scanf("%d",&score[i]);
		getchar();
	}
	for(i=0;i<n-1;i++)   //交换法对成绩排序
	{
		for(j=i+1;j<n;j++)
		{
			if(score[j]>score[i])
			{
				temp=score[j];
				score[j]=score[i];
				score[i]=temp;
				strcpy(t,str[j]);
				strcpy(str[j],str[i]);
				strcpy(str[i],t);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s %d\n",str[i],score[i]);
	}
	system("pause");
	return 0;
}