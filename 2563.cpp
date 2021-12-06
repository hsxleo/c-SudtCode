#include <stdio.h>
int prime_num(int n);
int main()
{
    int n,m;
    int t;
    int flag;
    while(scanf("%d",&n)!=EOF)
    {
        flag=1;
        m=prime_num(n);
        if(m==0)
            flag=0;
        else
        {
            m=m*10;
            t=m;
            while(m)
            {
                t=m%10;
                if(t!=4&&t!=7)
                {
                    flag=0;
                    break;
                }
                m=m/10;
            }
        }
        if(flag==0)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
/****************************************************
函数功能：判断整数是否为素数，若是判断是第几个素数
参数：整数
返回值：是素数返回是第几个，不是返回0
*****************************************************/
int prime_num(int n)
{
    int i;
    int j=0;
    for(i=2;i<n;i++)
    {
       j++;
       if(n%i!=0)
       {
           j++;
       }
       else
       {
           return 0;
       }
    }
    return j;
}
