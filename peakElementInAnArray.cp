#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       int s = 0 , e = n-1, mid;
       
       while(s <= e){
           mid = s + (e - s)/2;
           
           if(arr[mid-1] <= arr[mid] && arr[mid+1] <= arr[mid]){
               return mid;
           }
           if(arr[mid-1] > arr[mid]){
                e = mid - 1;
           }
           else{
               s = mid + 1;
           }
       }
       return mid;
    }
};