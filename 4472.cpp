#include <iostream>
using namespace std;

void f(string *a);

int main()
{
    string a[3];
    int i;
    for(i=0;i<3;i++)
    {
        cin >> a[i];
    }
    f(a);
    for(i=0;i<3;i++)
    {
        cout << a[i] << endl ;
    }
}
void f(string *a)
{
    string t;
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2-i;j++)
        {
            if(a[j]<a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}
