#include <stdio.h>

struct information
{
    char name[21];
    int h;
}before[100],after[100],t;
int main()
{
    int n;
    int i,j,k=0;
    int min,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s %d",before[i].name,&before[i].h);
    }
    scanf("%d%d",&min,&max);
    for(i=0;i<n;i++)
    {
        if(before[i].h>=min&&before[i].h<=max)
        {
            after[k]=before[i];
            k++;
        }
    }
    if(k==0)
        printf("No\n");
    for(i=0;i<k-1;i++)
    {
        for(j=0;j<k-i-1;j++)
        {
            if(after[j].h>after[j+1].h)
            {
                t=after[j];
                after[j]=after[j+1];
                after[j+1]=t;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%s %d\n",after[i].name,after[i].h);
    }
    return 0;
}
