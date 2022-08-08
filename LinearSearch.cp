#include<iostream>
#include<algorithm>
using namespace std;

bool linearSearch(int arr[] , int size , int key){
    for(int i = 0 ; i < size ; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main()
{
    int size,key;
    cin>>size;
    int arr[size];
    for(int i = 0 ; i < size ; i++){
        cin>>arr[i];
    }
    cin>>key;
    int found = linearSearch(arr,size,key);
    if(found){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
}