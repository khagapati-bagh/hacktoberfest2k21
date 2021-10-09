#include <iostream>
using namespace std;

void insertionSort(int n, int a[])
{
    int i, j, key;
    for (j = 1; j < n; j++)
    {
        key = a[j];
        i = j - 1;
        while ((i > -1) && (a[i] > key))
        {
            a[i + 1] = a[i];
            i--;
        }
        a[i + 1] = key;
    }
    cout << "Sorted Array: "
         << "[ ";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "]";
}

int main()
{
    int n;
    cout << "\n    Program for Insertion Sort\n------------------------------\n";
    cout << "Enter the number of elements (Size of array you want): ";
    cin >> n;
    int sortArray[n];
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element at index number [" << i << "]: ";
        cin >> sortArray[i];
    } /* Accepting of array finished*/

    insertionSort(n, sortArray);
    return 0;
}