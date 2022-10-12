#include "Sorting.h"

void Merge(int a[], int l, int mid, int h)
{
    int i, j, k;
    int b[100];
    i = l;
    j = mid + 1;
    k = h;
    while (i <= mid && j <= h)
    {
        if (a[i] < a[j])
        {
            b[k++] = a[i++];
        }
        else
        {
            b[k++] = a[j++];
        }
    }
    for (; i <= mid; i++)
    {
        b[k++] = a[i];
    }
    for (; j <= h; j++)
    {
        b[k++] = a[j];
    }
    for (i = l; i <= h; i++)
    {
        a[i] = b[i];
    }
}

void MergeSort(int a[], int l, int h)
{
    int mid;
    if (l < h)
    {
        mid = (l + h) / 2;
        MergeSort(a, l, mid);
        MergeSort(a, mid + 1, h);
        Merge(a, l, mid, h);
    }
}