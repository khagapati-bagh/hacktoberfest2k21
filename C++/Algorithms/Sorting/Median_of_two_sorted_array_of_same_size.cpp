#include<bits/stdc++.h>
using namespace std;

int getMedian(int arr1[], int arr2[], int n){

    vector<int>v;
    int i=0;
    int j=0;
    while(i<n && j<n){

        if(arr1[i]<arr2[j]){
            v.push_back(arr1[i]);
            i++;
        } 
        
        else {
            v.push_back(arr2[j]); 
            j++;
        }
    }
    
    for(;i<n;i++) v.push_back(arr1[i]);
    for(;j<n;j++) v.push_back(arr2[j]);

    // sort( v.begin(), v.end() );

    if(v.size()%2==0){
        int avg = ( v[(v.size()/2)] + v[(v.size()/2)-1] ) / 2;

        return avg;
    }
    else return v[v.size()/2];
    
}

int main(){

    int arr1[] = {1, 2, 3, 6};
    int arr2[] = {4, 6, 8, 10};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    cout<<"Average of middle elements is = "<< getMedian(arr1, arr2, n);

    return 0;
}
