#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int slen(char a[])
{
	int n;
	n=strlen(a);
	return n;
}
int main(void)
{
	char a[200];
    int n;
    gets(a);
    n=slen(a);
    printf("len=%d\n",n);
	system("pause");
    return 0;
}
