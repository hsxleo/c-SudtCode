#include <stdio.h>

int main()
{
    double a[7];
    char name[31];
    double max,min;
    double sum;
    int i;
    while(scanf("%lf",&a[0])!=EOF)
    {
        for(i=1;i<7;i++)
            scanf("%lf",&a[i]);
        getchar();
        gets(name);
        max=a[0];
        min=a[0];
        sum=a[0];
        for(i=1;i<7;i++)
        {
            sum+=a[i];
            if(max<a[i])
                max=a[i];
            if(min>a[i])
                min=a[i];
        }
        printf("%s %.2lf\n",name,(sum-min-max)/5);
    }
    return 0;
}
