#include "BubbleSort.h"
#include "InsertionSort.h"
#include "SelectionSort.h"
#include "InterchangeSort.h"
#include "QuickSort.h"
#include "MergeSort.h"
#include "CountSort.h"
#include "ShellSort.h"

int main()
{
    int a[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3};
    int n = 10;
    // BubbleSort(a,n);
    // InsertionSort(a,n);
    // SelectionSort(a,n);
    // InsertionSort(a,n);
    // QuickSort(a,0,n);
    // IterativeMergeSort(a, n);
    // MergeSort(a, 0, n - 1);
    CountSort(a, n);
    // ShellSort(a, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
