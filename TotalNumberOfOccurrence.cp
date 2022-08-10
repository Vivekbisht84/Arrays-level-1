#include<iostream>
using namespace std;

int firstOcc(int *arr , int n , int k){
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s)/2;
  int ans = -1;
  while(s<=e){
    if(arr[mid] == k){
      ans = mid;
      e = mid - 1;
    }
    else if(k > arr[mid]){
      s = mid + 1;
    }
    else{
      e = mid - 1;
    }
    mid = s + (e - s)/2;
  }
  return ans;
}

int lastOcc(int *arr , int n , int k){
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s)/2;
  int ans = -1;
  while(s<=e){
    if(arr[mid] == k){
      ans = mid;
      s = mid + 1;
    }
    else if(k > arr[mid]){
      s = mid + 1;
    }
    else{
      e = mid - 1;
    }
    mid = s + (e - s)/2;
  }
  return ans;
}


int main()
{
  int n,k;
  cin>>n;
  int arr[n];
  for(int i = 0 ; i < n ; i++){
    cin>>arr[i];
  }
  cin>>k;
  int ans1 = firstOcc(arr,n, k);
  int ans2 = lastOcc(arr, n, k);
  int ans3 = (ans2 - ans1) + 1;
  cout<<"total number of occurrence of the element is :"<<ans3<<endl;
}