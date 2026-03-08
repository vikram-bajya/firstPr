#include <iostream>
using namespace std;

// solve this using extra space 
int printArr(int arr[],int n){
for(int i=0;i<n;i++){
  cout<<arr[i]<<",";
}
}

int main (){
    int arr[]={3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(int);
    int copyArr[n];

    for(int i=0;i<n;i++){
        int j=n-i-1;
        copyArr[i]=arr[j];
    }
    for(int i=0;i<n;i++){
        arr[i]=copyArr[i];
    }

   printArr(arr,n);
    return 0;
}


// @@ without extra space(two pointer approch);


// space complecity=o(1);
// time complecity same o(n);

int printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}

int main(){
int arr[]={3,4,5,6,7,8,9,10};

   int n=sizeof(arr)/sizeof(int);

   int start=0,end=n-1;
   while(start<end){

    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;

    start++;
    end--;
   }
   printArr(arr,n);
    return 0;
}