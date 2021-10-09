#include <iostream>
#include <array>
using namespace std;

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int low, int arr[], int high)
{
    int arrSize = *(&arr + 1) - arr;
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(low, arr, pi - 1);
        quickSort(pi + 1, arr, high);
    }
}

int main()
{
    int n;
    cout << "\n    Program for Quick Sort\n------------------------------\n";
    cout << "Enter the number of elements (Size of array you want): ";
    cin >> n;
    int sortArray[n];
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element at index number [" << i << "]: ";
        cin >> sortArray[i];
    } /* Accepting of array finished*/
    quickSort(0, sortArray, n - 1);

    cout << "Sorted Array: "
         << "[ ";
    for (int i = 0; i < n; i++)
        cout << sortArray[i] << " ";
    cout << "]";
    return 0;
}