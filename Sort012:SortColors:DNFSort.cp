#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>
using namespace std;


void Sort012(int *arr , int n){
    int low = 0;
    int high = n - 1;
    int mid = 0;
    
    while(mid < high){
        
        //case 1 for encounter 0
        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high--]);
        }
    }
}

void printArray(int *arr , int n){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    Sort012(arr,n);
    printArray(arr,n);
}
