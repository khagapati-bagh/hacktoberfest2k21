#include <iostream>
using namespace std;

void bubbleSort(int n, int a[])
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
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
    cout << "\n    Program for Bubble Sort\n------------------------------\n";
    cout << "Enter the number of elements (Size of array you want): ";
    cin >> n;
    int sortArray[n];
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element at index number [" << i << "]: ";
        cin >> sortArray[i];
    } /* Accepting of array finished*/

    bubbleSort(n, sortArray);
    return 0;
}