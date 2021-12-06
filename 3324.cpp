#include <stdio.h>
#include <stdlib.h>

int List[10000];
int i,j,k;
void CreatList(int n)
{
    for(i=0;i<n;i++)
    {
        scanf("%d",&List[i]);
    }
}

void del(int n)
{
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(List[i]==List[j])
            {
                n--;
                for(k=j;k<n;k++)
                {
                    List[k]=List[k+1];
                }
                j--;
            }
        }
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d ",List[i]);
    }
    printf("%d\n",List[i]);
}

int main()
{
    int n,m;
    scanf("%d",&m);
    while(m--)
    {
        scanf("%d",&n);
        CreatList(n);
        del(n);
    }
    return 0;
}

