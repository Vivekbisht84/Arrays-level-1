#include<iostream>
#include<algorithm>
using namespace std;

int SingleElementInSortedArray(int *arr , int size){
    int ans = 0;
    for(int i = 0 ; i < size ; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i = 0 ; i < size ; i++){
        cin>>arr[i];
    }
    cout<<SingleElementInSortedArray(arr,size);
}