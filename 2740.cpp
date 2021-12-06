#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char str[10001];
	char str2[10001];
	int i,j;
	int n;
	while(scanf("%s",str)!=-1)
	{
	    n=strlen(str);
	    for(i=0,j=0;i<n;i++)
	    {
		    if(str[i]=='F')
		    {
			    str2[j]='F';
			    j++;
		    }
		}
		for(i=j;i<n;i++)
			str2[i]='M';
		str2[n]='\0';
		puts(str2);
	}
	system("pause");
	return 0;
}