#include <stdio.h>

struct type
{
    char form[8];
    int a;
    double b;
    char c[20];
}ty[100000];

int main()
{
    int n,m;
    int i;
    int q[100000];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%s",ty[i].form);
        getchar();
        if(ty[i].form[0]=='I')
            scanf("%d",&ty[i].a);
        else if(ty[i].form[0]=='D')
            scanf("%lf",&ty[i].b);
        else if(ty[i].form[0]=='S')
            gets(ty[i].c);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&q[i]);
        if(ty[q[i]].form[0]=='I')
            printf("%d\n",ty[q[i]].a);
        else if(ty[q[i]].form[0]=='D')
            printf("%.2lf\n",ty[q[i]].b);
        else if(ty[q[i]].form[0]=='S')
            puts(ty[q[i]].c);
    }
    return 0;
}
