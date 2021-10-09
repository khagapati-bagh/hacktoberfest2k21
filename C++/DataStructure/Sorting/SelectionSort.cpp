#include <iostream>
using namespace std;

void selectionSort(int n, int a[])
{
    int i, j, loc, big;
    for (i = n - 1; i > 0; i--)
    {
        big = a[0];
        loc = 0;
        for (j = 1; j <= i; j++)
        {
            if (a[j] > big)
            {
                big = a[j];
                loc = j;
            }
        }
        a[loc] = a[i];
        a[i] = big;
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
    cout << "\n    Program for Selection Sort\n------------------------------\n";
    cout << "Enter the number of elements (Size of array you want): ";
    cin >> n;
    int sortArray[n];
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element at index number [" << i << "]: ";
        cin >> sortArray[i];
    } /* Accepting of array finished*/

    selectionSort(n, sortArray);
    return 0;
}