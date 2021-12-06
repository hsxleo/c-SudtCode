#include <stdio.h>
#include <stdlib.h>

int ListA[10000];
int *ListB = &ListA[0];
int i,j,k;

void CreateList(int n)
{
    for(i=0;i<n;i++)
    {
        scanf("%d",&ListA[i]);
    }
}

void del(int n)
{
    int flag;
    int k=0;
    for(i=0;i<n;i++)
    {
        flag = 1;
        for(j=0;j<i;j++)
        {
            if(ListA[i]==ListA[j])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            ListB[k++] = ListA[i];
        }
    }
    for(i=0;i<k-1;i++)
    {
        printf("%d ",ListB[i]);
    }
    printf("%d\n",ListB[i]);
}

int main()
{
    int n,m;
    scanf("%d",&m);
    while(m--)
    {
        scanf("%d",&n);
        CreateList(n);
        del(n);
    }
    return 0;
}

