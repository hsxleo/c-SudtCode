#include <stdio.h>

int main()
{
    int n,m;
    int i;
    int count[1000]={0};
    int max,imax;
    int a[1000];
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
        count[a[i]]++;
    }
    imax=1;
    for(i=2;i<=n;i++)
    {
        if(count[imax]<count[i])
        {
            imax=i;
        }
    }
    printf("%d\n%d\n",imax,count[imax]);
    return 0;
}
