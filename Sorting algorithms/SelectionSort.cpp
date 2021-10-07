//You can get the time complexity by “counting” the number of operations 
//performed by your code. This time complexity is defined as a function of 
//the input size n using Big-O notation. n indicates the input size, 
//while O is the worst-case scenario growth rate function.

// Time Complexity : O(n^2)
// Space Complexity : O(1)

#include <iostream>

using namespace std;

void selectionsort(int arr[]) {
    for (int o = 0; o < 5 - 1; o++) {
        int min_index = o;
        for (int i = o + 1; i < 5; i++) {
            if (arr[i] < arr[o]) {
                min_index = i;
            }
        }

        int temp = arr[o];
        arr[o] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main() {
    int arr[5];
    cout << "Enter 5 Elements = ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << endl << endl << "Elements Before Sorting" << endl;

    for (int i = 0; i < 5; i++) {
        cout << arr[i];
    }

    selectionsort(arr);

    cout << endl << endl << "Elements After Sorting" << endl;

    for (int i = 0; i < 5; i++) {
        cout << arr[i];
    }

    return 0;
}

