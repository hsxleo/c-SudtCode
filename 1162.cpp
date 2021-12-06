#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char str1[81];
    char *p=str1;
    gets(str1);
    for(i=0;p[i]!='\0';i++)
    {
        if(p[i]>='A'&&p[i]<='Z'||p[i]>='a'&&p[i]<='z')
        {
            printf("%c",p[i]);
        }
    }
    printf("\n");
    return 0;
}
