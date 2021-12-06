#include <stdio.h>

struct goods
{
    int wi;
    int pi;
}g[100],t;

int main()
{
    int n;
    int i,j;
    while(scanf("%d",&n)!=-1)
    {
        for(i=0;i<n;i++)
            scanf("%d",&g[i].wi);
        for(i=0;i<n;i++)
            scanf("%d",&g[i].pi);
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(g[j].wi>g[j+1].wi)
                {
                    t=g[j];
                    g[j]=g[j+1];
                    g[j+1]=t;
                }
                else if(g[j].wi==g[j+1].wi)
                {
                    if(g[j].pi<g[j+1].pi)
                    {
                        t=g[j];
                        g[j]=g[j+1];
                        g[j+1]=t;
                    }
                }
            }
        }
        for(i=0;i<n;i++)
        {
            printf("%d %d\n",g[i].wi,g[i].pi);
        }
    }
    return 0;
}
