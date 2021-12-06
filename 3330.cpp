#include <stdio.h>

//���ֲ���
void Find(int *link,int len,int n)
{
    int front = 0;
    int end = len-1;
    int mid;
    while(front <= end)
    {
        mid = (front+end)/2;
        if(link[mid] < n)
        {
            front = mid + 1;
        }
        else if(link[mid] > n)
        {
            end = mid - 1;
        }
        else if(link[mid] == n)
        {
            printf("%d\n",mid+1);
            return ;
        }
    }
    printf("No Found!\n");
}


int main()
{
    int link[100000];  //˳���
    int len; //����
    int t;   //����
    int n;   //����ҵ�Ԫ��

    //����˳���
    scanf("%d",&len);
    for(int i=0;i<len;i++)
    {
        scanf("%d",&link[i]);
    }

    //ѭ���ж�
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n > link[len-1] || n < link[0])
        {
            printf("No Found!\n");
        }
        else
        {
            Find(link,len,n);
        }
    }
    return 0;
}
