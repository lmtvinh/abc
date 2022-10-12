#include "Sorting.h"

void swap(int &a,int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void BubbleSort(int a[],int n)
{
    for (int i = 0;i < n - 1 ;i++)
    {
        for (int j = 0;j<n-i-1;j++)
        {
            if (a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}