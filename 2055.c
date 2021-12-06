#include <stdio.h>
#include <string.h>

struct before
{
    char name[21];
    char from[21];
    char to[10];
}bef[100],bef2[100];

struct after
{
    char name[2100];
    char form[21];
}aft[100];


void change1(int n);
int change2(int n);
void change3(int n);

int main()
{
    int n;
    int ch;
    int i;
    int flag;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s%s%s",bef[i].name,bef[i].from,bef[i].to);
        bef2[i]=bef[i];
    }
    change1(n);
    ch=change2(n);
    for(i=0;i<ch;i++)
    {
        printf("%s : ",aft[i].form);
        puts(aft[i].name);
    }

    change3(n);

    printf("zichuan :");
    flag=0;
    for(i=0;i<n;i++)
    {
        if(strcmp("zichuan",bef2[i].to)==0)
        {
            flag=1;
            putchar(' ');
            puts(bef2[i].name);
            break;
        }
    }
    if(flag==0)
        printf("\n");
    printf("linzi :");
    flag=0;
    for(i=0;i<n;i++)
    {
        if(strcmp("linzi",bef2[i].to)==0)
        {
            flag=1;
            putchar(' ');
            puts(bef2[i].name);
            break;
        }
    }
    if(flag==0)
        printf("\n");
    printf("zhoucun :");
    flag=0;
    for(i=0;i<n;i++)
    {
        if(strcmp("zhoucun",bef2[i].to)==0)
        {
            flag=1;
            putchar(' ');
            puts(bef2[i].name);
            break;
        }
    }
    if(flag==0)
        printf("\n");
    printf("boshan :");
    flag=0;
    for(i=0;i<n;i++)
    {
        if(strcmp("boshan",bef2[i].to)==0)
        {
            flag=1;
            putchar(' ');
            puts(bef2[i].name);
            break;
        }
    }
    if(flag==0)
        printf("\n");
    return 0;
}

void change1(int n)
{
    int i,j;
    int flag;
    for(i=0;i<n;i++)
    {
        j=0;
        flag=1;
        while(j<i)
        {
            if(strcmp(bef[i].from,bef[j].from)==0)
            {
                flag=0;
                break;
            }
            j++;
        }
        if(flag==0)
        {
            strcat(bef[j].name," ");
            strcat(bef[j].name,bef[i].name);
        }
    }
}



int change2(int n)
{
    int i,j,k=0;
    int flag;
    for(i=0;i<n;i++)
    {
        j=0;
        flag=1;
        while(j<i)
        {
            if(strcmp(bef[i].from,bef[j].from)==0)
            {
                flag=0;
                break;
            }
            j++;
        }
        if(flag==1)
        {
            strcpy(aft[k].form,bef[i].from);
            strcpy(aft[k].name,bef[i].name);
            k++;
        }
    }
    return k;
}

void change3(int n)
{
    int i,j;
    int flag;
    for(i=0;i<n;i++)
    {
        j=0;
        flag=1;
        while(j<i)
        {
            if(strcmp(bef2[i].to,bef2[j].to)==0)
            {
                flag=0;
                break;
            }
            j++;
        }
        if(flag==0)
        {
            strcat(bef2[j].name," ");
            strcat(bef2[j].name,bef2[i].name);
        }
    }
}

