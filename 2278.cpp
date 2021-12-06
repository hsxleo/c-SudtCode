#include <stdio.h>

struct apple
{
    int fi;
    int mi;
    double avg;
}ap[51],t;

int main()
{
    int n,m;
    int i,j;
    double sum;
    while(scanf("%d%d",&n,&m)!=-1&&n!=-1&&m!=-1)
    {
        for(i=0;i<m;i++)
        {
            scanf("%d%d",&ap[i].fi,&ap[i].mi);
            ap[i].avg=(double)ap[i].fi/ap[i].mi;
        }


        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(ap[j].avg<ap[j+1].avg)
                {
                    t=ap[j];
                    ap[j]=ap[j+1];
                    ap[j+1]=t;
                }
            }
        }


        i=0;
        sum=0;
        while((n-ap[i].mi>0)&&i!=m)
        {
            sum+=ap[i].fi;
            n-=ap[i].mi;
            i++;
        }
        if(i!=m)
            sum+=n*ap[i].avg;
        printf("%.3lf\n",sum);
    }
    return 0;
}
