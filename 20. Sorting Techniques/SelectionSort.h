#include "Sorting.h"

void SelectionSort(int a[], int n)
{
    int i,j,k;
    for (i = 0;i<n-1;i++)
    {
        for (j = k = i;j<n;j++)
        {
            if(a[j] < a[k])
            {
                k = j;
            }
        }
        swap(a[i],a[k]);
    }
}