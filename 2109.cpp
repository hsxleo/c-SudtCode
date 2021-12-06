#include <iostream>
using namespace std;

int main()
{
    int i,j;
    int n;
    int t;
    int a[1000000];
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]<a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(i==n-1)
            cout << a[i] << endl;
        else
            cout << a[i] << " ";
    }
    return 0;
}
