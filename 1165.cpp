/***********************
制作人：黄士祥
制作日期：2019.20.24
制作内容：素数
***********************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,j,t;
	printf("21\n");
	for(i=100;i<200;i++)
	{
		t=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				break;
			}
			else 
				t++;
		}
		if(i==t+2)
		{
		   printf("%d ",i);
		}

	}
	system("pause");
	return 0;
}