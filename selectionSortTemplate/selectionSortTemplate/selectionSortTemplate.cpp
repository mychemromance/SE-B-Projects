
// selectionSortTemplate.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

template<typename T>
void swap(T *x, T *y) //swap by reference
{
	T t = *x;
	*x = *y;
	*y = t;
	return;
}

template<typename T>
void selectSort(T arr[], int n) //function to select sort
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

template<typename T>
void printArray(T a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return;
}

template<typename T> void driver()
{
	T *arr;
	int n;
	cout << "Enter the size of the integer array: ";
	cin >> n;
	arr = new T[n];
	cout << "Enter " << n << " numbers:\n";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "The original integer array is ";
	printArray(arr, n);
	selectSort(arr, n);
	cout << "The sorted integer array is ";
	printArray(arr, n);
}

int main()
{
	driver();
    return 0;
}

