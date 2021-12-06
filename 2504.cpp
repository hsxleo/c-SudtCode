#include <stdio.h>
#include <math.h>

//计算并输出
void ComputePrint(int m)
{
    double sum=0;
    for(int i=1;i<=m;i++)
    {
        if(i>150)   //150以后两位固定
            break;
        sum += pow(-1,i+1)*1/i;
    }
    printf("%.2lf\n",sum);
}
int main()
{
    int n;
    int m;
    scanf("%d",&n);
    while(n--)
    {
        //输入要计算的项数
        scanf("%d",&m);

        //计算并输出
        ComputePrint(m);
    }
}
