#include<bits/stdc++.h>
using namespace std;

int MissingNumber(int *arr , int n){
    int a = arr[0];
    int b = 1;
    
    for(int i = 1 ; i < n ; i++){
        a = a ^ arr[i];
    }
    for(int i = 2 ; i <= n+1 ; i++){
        b = b ^ i;
    }
    return a ^ b;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int ans = MissingNumber(arr,n);
    cout<<ans<<" ";
    
}