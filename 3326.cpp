#include <stdio.h>
#include <stdlib.h>

int link[1000000];

void CreateList(int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        scanf("%d",&link[i]);
    }
}

void Shift(int len,int m)
{
    int i,j = 0;
    for(i=len;i<len+m;i++)
    {
        link[i] = link[j++];
    }
    for(i=0;i<len;i++)
    {
        link[i] = link[i+m];
    }
}
int main()
{
    int n;    //����
    int len;  //˳�����
    int m;    //�ڼ���
    int i;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&len);
        scanf("%d",&m);
        CreateList(len);
        Shift(len,m);
        for(i=0;i<len-1;i++)
        {
            printf("%d ",link[i]);
        }
        printf("%d\n",link[i]);
    }
    return 0;
}
