/*************************
�����ˣ���ʿ��
�������ڣ�2019.10.20
�������ݣ�ѹ��Ǯ
*************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int T,N;
	scanf("%d",&T);
	while(scanf("%d",&N)!=EOF)
	{
		if(1000000%N==0)
			printf("%d\n",1000000/N);
		else
			printf("No\n");
	}
	system("pause");
	return 0;
}