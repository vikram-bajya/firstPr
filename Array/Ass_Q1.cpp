#include <iostream>
using namespace std;

int function(int arr[],int n){
    
    for(int i=0;i<n;i++){
        if(arr[i-1]==arr[i]){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(int);
  cout<< function(arr,n);

    return 0;
}