/*
        Author : mohit ahlawat
        Date : 08/10/2021
        Description : recusive binary Search , binary search algorithm is O(log n),best-case time complexity would be O(1)

*/
#include <iostream.h>

#include <stdio.h>

// A recursive binary search function. It returns location of x in
// given array arr[l..r] is present, otherwise -1
int binarySearch(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        // If the element is present at the middle itself
        if (arr[mid] == x) {
            return mid;
        }
        // If element is smaller than mid, then it can only be present
        // in left subarray
        if (arr[mid] > x) {
            return binarySearch(arr, l, mid - 1, x);
        }
        // Else the element can only be present in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }

    // We reach here when element is not present in array
    return -1;
}

int main() {
    int arr[100], n;
    cout << "Enter the number of elements in the array";
    cin >> n;
    cout << "Enter the element in array ";
    for (int i = 0; i <= n; i++) {
        cin >> arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? printf("Element is not present in array"): printf("Element is present at index %d", result);
    return 0;
}
