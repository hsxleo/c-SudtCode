/********************************
�����ˣ���ʿ��
�������ڣ�2019.10.22
�������ݣ���ĳ����Χ�ڵ���������
*********************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,temp,a=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(i==2)
        {
            printf("%d ",i);
            a++;
        }
        else
        {
            for(temp=2;temp<i;temp++)
            {
                if(i%temp==0)
                {
                    break;
                }
            }
            if(i==temp)
            {
                printf("%d ",i);
                a++;
                if(a%10==0)
                    printf("\n");
            }
        }
 
    }
	system("pause");
    return 0;
}
