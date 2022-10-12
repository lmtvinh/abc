#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

void swap(int &a, int &b);

void BubbleSort(int a[], int n);

void InsertionSort(int a[], int n);

void SelectionSort(int a[], int n);

void InterchangeSort(int a[], int n);

int partition(int a[], int l, int h);

void QuickSort(int a[], int l, int h);

void Merge(int a[], int l, int mid, int h);

void IterchangeSort(int a[], int n);

void MergeSort(int a[], int l, int h);

int findMax(int a[], int n);

void CountSort(int a[], int n);

void ShellSort(int a[], int n);