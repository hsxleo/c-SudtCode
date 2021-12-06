#include <stdio.h>

struct choice
{
    char name[100];
    int h;
    int w;
}before[1000],after[1000],temp;
int main()
{
    int n;
    int i,j,k=0;
    int a,b,c,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s %d %d",before[i].name,&before[i].h,&before[i].w);
    }
    scanf("%d%d%d%d",&a,&b,&c,&d);


    for(i=0;i<n;i++)
    {
        if(before[i].h>=a  &&  before[i].h<=b  &&  before[i].w>=c  &&  before[i].w<=d)
        {
            after[k]=before[i];
            k++;
        }
    }
    if(k==0)
        printf("No\n");
    else
    {
        for(i=0;i<k-1;i++)
        {
            for(j=0;j<k-i-1;j++)
            {
                if(after[j].h>after[j+1].h)
                {
                    temp=after[j];
                    after[j]=after[j+1];
                    after[j+1]=temp;
                }
                else if(after[j].h==after[j+1].h)
                {
                    if(after[j].w>after[j+1].w)
                    {
                        temp=after[j];
                        after[j]=after[j+1];
                        after[j+1]=temp;
                    }
                }
            }
        }
        for(i=0;i<k;i++)
        {
            printf("%s %d %d\n",after[i].name,after[i].h,after[i].w);
        }
    }
    return 0;
}
