/*
    Author : Payal Pote
    Date : 07-10-2021
    Description : I'm an ECE student at IIT BHU.
*/

// This program is an implementation of binary search algorithm in c++.
// Time complexity : O(n)
#include<bits/stdc++.h>

using namespace std;

int binarysearch(vector<int>& arr, int ele){

    int n = arr.size();

    int start = 0, end = n-1;

    while( start <= end )
    {
        int mid = start + (end - start)/2;      // calculate middle index
        
        if( arr[mid] == ele ){      // if element is found at index mid
            return mid;
        }
        else if( ele < arr[mid] ){       //if element is less than the element present at mid, search in first half
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1; 
}

int main(){
    vector<int> arr{ 2, 3, 5, 10, 35, 40 }; //sorted array

    int element = 10;  // element to find

    int result = binarysearch(arr, element);

    if( result == -1 ){         // if element not present in array.
        cout<<"Element is not present in array";
    }
    else{
        cout<<"Element is present at index "<<result;
    }

    return 0;
}

