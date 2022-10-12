#include "Sorting.h"

int partition(int a[],int l,int h)
{
    int pivot = a[l];
    int i = l;
    int j = h;
    do 
    {
        do
        {
            i++;
        } while (a[i] <= pivot);

        do 
        {
            j--;
        } while (a[j] > pivot);

        if (i < j)
        {
            swap(a[i], a[j]);
        }
    } while (i < j);

    swap (a[l] , a[j]);
    return j;
}

void QuickSort(int a[], int l,int h)
{
    int j;
    if (l < h)
    {
        j = partition(a,l,h);
        QuickSort(a,l,j);
        QuickSort(a,j+1,h);
    }
}