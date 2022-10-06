//You can get the time complexity by “counting” the number of operations 
//performed by your code. This time complexity is defined as a function of 
//the input size n using Big-O notation. n indicates the input size, 
//while O is the worst-case scenario growth rate function.

// Time Complexity : O(n^2)
// Space Complexity : O(1)

// C++ program for insertion sort

#include <bits/stdc++.h>
using namespace std;

// Function to sort an array using
// insertion sort
void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		// Move elements of arr[0..i-1],
		// that are greater than key, to one
		// position ahead of their
		// current position
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}


int main()
{
  int n ; 
  cin >> n ; 
  int arr[n];
  for (int i = 0; i < 5; i++) {
      cin >> arr[i];
  }

  cout << endl << endl << "Elements Before Sorting" << endl;

  for (int i = 0; i < n; i++) {
      cout << arr[i];
  }

  insertionSort(arr, n);

  cout << endl << endl << "Elements After Sorting" << endl;

  for (int i = 0; i < n; i++) {
      cout << arr[i];
  }
	return 0;
}

