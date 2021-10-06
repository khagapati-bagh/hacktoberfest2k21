// program to Segregate even and odd numbers
#include <iostream>
using namespace std;
void getArrangedEvenOdd(int arr[], int n)
{
    int i = -1, j = 0;
    while (j != n)
    {
        if (arr[j] % 2 == 0)
        {
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }
    
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[] = {2 , 4 , 5 , 1 , 7 , 8 ,9 , 7};
    int n = sizeof(arr) / sizeof(int);
    getArrangedEvenOdd(arr, n);
    return 0;
}
