/*
    Author : Krutika Bhatt
    Date : 07/10/2021
    Description : Merge Sort Algorithm uses Divide and Conquer Strategy to repeatedly divide the array into halves and then merging the sub arrays in sorted way 
*/


// Time Complexity : O(NlogN)
// Space Complexity : O(N)


#include<bits/stdc++.h>

using namespace std;

void merge_subarrays(int array[], int start, int middle, int end) {

  int lsize = middle - start + 1; // <- Left subarray length 
  int rsize = end - middle; // <- Right subarray length 

  int left[lsize], right[rsize];

  for (int i = 0; i < lsize; i++) {
    left[i] = array[start + i];
  }

  for (int j = 0; j < rsize; j++) {
    right[j] = array[middle + 1 + j];
  }

  int i = 0, j = 0, k = start;

  while (i < lsize && j < rsize) {
    if (left[i] <= right[j]) {
      array[k] = left[i];
      i++;
    } else {
      array[k] = right[j];
      j++;
    }

    k++;
  }

  //Fill the array with the remaining elements
  while (i < lsize) {
    array[k] = left[i];
    i++;
    k++;
  }

  while (j < rsize) {
    array[k] = right[j];
    j++;
    k++;
  }

}

void mergeSort(int array[], int start_index, int end_index) {

  if (start_index < end_index) {

    // Array is divided into two subarrays from middle index
    int middle = (start_index + end_index) / 2;

    mergeSort(array, start_index, middle);
    mergeSort(array, middle + 1, end_index);

    //Merging the subarrays
    merge_subarrays(array, start_index, middle, end_index);
  }
}

void printArray(int array[], int n) {

  for (int i = 0; i < n; i++) {
    cout << array[i] << "  ";
  }
  cout << endl;

}

int main() {

  int N;
  cout << "Enter the array size :";
  cin >> N;

  int array[N];
  cout << "Enter the array Elements :";
  for (int i = 0; i < N; i++) {
    cin >> array[i];
  }

  //Start the merge sort with start index of array=0 and the end index=N-1
  mergeSort(array, 0, N - 1);

  cout << "\nThe sorted array using Merge Sort is : ";
  printArray(array, N);

}