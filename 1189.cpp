/******************************************
制作人：黄士祥
制作日期：2019.10.13
制作内容：输入一个三位正整数，将它反向输出。 
*******************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num,g,sh,b,num2;//num为输入的三位数，g为个位，sh为十位，b为百位，num2为输出的三位数
	scanf("%d",&num);
	g=num%10;
	sh=num/10%10;
	b=num/100;
	num2=g*100+sh*10+b;
	printf("%d",num2);
	system("pause");
return 0;
}