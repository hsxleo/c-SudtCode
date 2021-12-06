#include <stdio.h>

struct acm
{
    int id;
    int m;
};
int main()
{
    struct acm f[10000];
    struct acm t;
    int h,n;
    int i,j,k;
    scanf("%d",&h);
    for(i=0;i<h;i++)
    {

        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d%d",&f[j].id,&f[j].m);
        }
        for(j=0;j<n-1;j++)
        {
            for(k=0;k<n-j-1;k++)
            {
                if(f[k].m<f[k+1].m)
                {
                    t=f[k];
                    f[k]=f[k+1];
                    f[k+1]=t;
                }
            }
        }
        for(j=0;j<n;j++)
        {
            printf("%d %d\n",f[j].id,f[j].m);
        }
    }
    return 0;
}
