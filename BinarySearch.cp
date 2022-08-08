#include<iostream>
using namespace std;

int binarySearch(int arr[] , int n , int key){
    int s = 0;
    int e = n - 1;
    int mid = s + ( e - s )/2;
    while(s<=e){
        if(arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return -1;
}

int main()
{
    int n,key;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ;i++){
        cin>>arr[i];
    }
    cin>>key;
    int ans = binarySearch(arr,n,key);
    cout<<ans<<endl;
    return 0;
}