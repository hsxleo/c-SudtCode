
#include <stdio.h>


int main()
{
    int a_link[10000];
    int b_link[10000];
    int c_link[20000];
    int a,b,c;
    int i,j,k;

    //输入
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        scanf("%d",&a_link[i]);
    }
    for(i=0;i<b;i++)
    {
        scanf("%d",&b_link[i]);
    }

    //合并
    i = 0;j = 0;k = 0;
    while(i!=a&&j!=b)
    {
        if(a_link[i] < b_link[j])
        {
            c_link[k++] = a_link[i++];
        }
        else
        {
            c_link[k++] = b_link[j++];
        }
    }
    if(i==a&&j!=b)
    {
        while(j < b)
        {
            c_link[k++] = b_link[j++];
        }
    }
    else if(i!=a&&j==b)
    {
        while(i < a)
        {
            c_link[k++] = a_link[i++];
        }
    }

    //输出
    c = k;
    for(k=0;k<c-1;k++)
    {
        printf("%d ",c_link[k]);
    }
    printf("%d\n",c_link[k]);
}
