// C++ program to remove duplicates in-place
#include<iostream>
using namespace std;

// Function to remove duplicate elements
// This function returns new size of modified
// array.
int removeDuplicates(int arr[], int n)
{
	if (n==0 || n==1)
		return n;
	// To store index of next unique element
	int j = 0;

	// Doing same as done in Method 1
	// Just maintaining another updated index i.e. j
	for (int i=0; i < n-1; i++)
		if (arr[i] != arr[i+1])
			arr[j++] = arr[i];

	arr[j++] = arr[n-1];

	return j;
}

// Driver code
int main()
{
	int arr[] = {4, 2, 3, 2, 2, 4, 5, 5,8,8,8};
	int n = sizeof(arr) / sizeof(arr[0]);

	// removeDuplicates() returns new size of
	// array.
	n = removeDuplicates(arr, n);

	// Print updated array
	for (int i=0; i<n; i++)
		cout << arr[i] << " ";

	return 0;
}

