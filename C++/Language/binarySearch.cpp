#include <iostream>
using namespace std;

int binary_search(int arr[],int item, int size)
{ 
     int LB = 0; //LB = lower bound
     int UB = size;  //UB = upper bound

     while (LB<=UB)
     {
        int mid = (LB + UB) / 2; // finding mid element
        if (item == arr[mid])
            return mid;
        else if (item > arr[mid])
            LB = mid + 1; 
        else 
            UB = mid - 1;
    }
     return -1 ; // returning -1 for unsucessful search
}

int main()
{
    int size;
    cout<<"Enter size of an array: \n";
    cin>>size;
    cout << "enter elements in ascending order \n";

    int arr[size]; // declearing arr of entered size
    for (int i=0; i<size ; i++)
    {   
        cin>>arr[i]; //take elements of array from user
    }
    int item; 
    cout<<"elemet to search: \n";
    cin >> item; 
    int key;
     key = binary_search(arr, item , size);
     if (key == -1)
         cout<<"unsuccessfull search";
     else
         {cout << "successfull search ";
         cout << key;}
     return 0;
}
