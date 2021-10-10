#include <iostream>

using namespace std;

void swap(int & first, int & second) {  //Function which uses aliases to swap numbers without third variable
    first = first + second;
    second = first - second;
    first = first - second;
}

int main() {
    int first, second;
    cout << "Enter First integer number = ";
    cin >> first;
    cout << "Enter Second integer number = ";
    cin >> second;
    cout << endl << "Before Swapping " << endl << endl;
    cout << "First Number = " << first << endl;
    cout << "Second Number = " << second << endl;
    swap(first, second);
    cout << endl << "After Swapping " << endl << endl;
    cout << "First Number = " << first << endl;
    cout << "Second Number = " << second;
    return 0;
}

