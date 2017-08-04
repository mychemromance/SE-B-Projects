
// selectionSortTemplate.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void swap(int *x, int *y) //swap by reference
{
	int t = *x;
	*x = *y;
	*y = t;
	return;
}

void selectSort(int arr[], int n) //function to select sort
{
	int i, j, minI;
	for (i = 0; i < n - 1; i++)
	{
		minI = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[minI])
			{
				minI = j;
			}
		}

		swap(&arr[minI], &arr[i]); //swap if a smaller number is found
	}
	return;
}

void printArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return;
}

int main()
{
	int *arr, n;
	cout << "Enter the size of the array: ";
	cin >> n;
	arr = new int[n];
	cout << "Enter " << n << " numbers:\n";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "The original array is ";
	printArray(arr, n);
	selectSort(arr, n);
	cout << "The sorted array is ";
	printArray(arr, n);
    return 0;
}

