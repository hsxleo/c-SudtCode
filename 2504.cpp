#include <stdio.h>
#include <math.h>

//���㲢���
void ComputePrint(int m)
{
    double sum=0;
    for(int i=1;i<=m;i++)
    {
        if(i>150)   //150�Ժ���λ�̶�
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
        //����Ҫ���������
        scanf("%d",&m);

        //���㲢���
        ComputePrint(m);
    }
}
