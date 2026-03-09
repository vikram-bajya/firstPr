#include <iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){

    int st=0;
    int end=n-1;
    while(st<=end){
    int mid=(st+end)/2;

    if(arr[mid]==key){
        return mid;
    }else if(arr[mid]<key){
        st=mid+1;
       
    }else if(arr[mid]>key){
        end=mid-1;
       
    }
    }
    return -1;
}

int main (){

    int arr[]={3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(int);
    cout<<binarySearch(arr,n,8);
    return 0;

}