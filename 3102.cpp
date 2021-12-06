/**************************************
制作人：黄士祥
制作日期：2019.10.19
制作内容： 输入只有一个数，保证只有0或1。
***************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	scanf("%d",&a);
	//if(a==0) printf("He he");
  //  else if(a==1) printf("I like you");
	switch(a)
	{
	case 0:
		printf("He he");
	case 1:
		printf("I like you");
	}                     
	system("pause");
	return 0;
}