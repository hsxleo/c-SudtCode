/********************************
制作人：黄士祥
制作日期：2019.10.22
制作内容：求某个范围内的所有素数
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
