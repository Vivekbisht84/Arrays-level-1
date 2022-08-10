#include<iostream>
using namespace std;

int lastOccurrence(int *arr , int n, int k){
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
  int ans = lastOccurrence(arr, n,k);
  cout<<ans<<endl;
}