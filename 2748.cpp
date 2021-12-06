#include <stdio.h>
#include <stdlib.h>
void QuickSort(int arr[], int low, int high);
int main()
{
	int n,m;
	int i,j,t,h;
	int a[100000];
	while(scanf("%d",&n)!=-1)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		QuickSort(a,0,n-1);
		scanf("%d",&m);
		i=0;
		while(i<m)
		{
			scanf("%d",&h);
			printf("%d\n",a[h-1]);
			i++;
		}

	}
	system("pause");
	return 0;
}
void QuickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int i = low;
        int j = high;
        int k = arr[low];
        while (i < j)
        {
            while(i < j && arr[j] < k)    
            {
                j--;
            }
 
            if(i < j)
            {
                arr[i++] = arr[j];
            }
 
            while(i < j && arr[i] >= k)     
            {
                i++;
            }
 
            if(i < j)
            {
                arr[j--] = arr[i];
            }
        }
 
        arr[i] = k;
 
        // µÝ¹éµ÷ÓÃ
        QuickSort(arr, low, i - 1);     // ÅÅÐòk×ó±ß
        QuickSort(arr, i + 1, high);    // ÅÅÐòkÓÒ±ß
    }
}