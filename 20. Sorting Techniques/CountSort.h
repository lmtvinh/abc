#include "Sorting.h"
#include "FindMax.h"

int findMin(int a[], int n)
{
    int min = 9999999;
    for (int i = 1; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    return min;
}

void CountSort(int a[], int n)
{
    int i, max, j;
    max = findMin(a, n);
    int count[max + 1];
    for (i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        count[a[i]]++;
    }
    i = 0;
    j = 0;
    while (i < max + 1)
    {
        if (count[i] > 0)
        {
            a[j++] = i;
            count[i]--;
        }
        else
        {
            i++;
        }
    }
}