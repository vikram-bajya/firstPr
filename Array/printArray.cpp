#include <iostream>
using namespace std;



void fun(int arr[]){
        arr[0]=1000;//so the value of arr at index 0 in main function is 1000
    }

int main (){

    int marks[5];
    int size=sizeof(marks)/sizeof(int);

    for(int i=0;i<size;i++){
        cin>>marks[i];
    }

    for(int i=0;i<size;i++){
        cout<<"marks"<<marks[i]<<endl;
    }

    



    int arr[5]={5,8,3,9,12};
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<max<<endl;
    cout<<min<<endl;


    fun(arr);
    cout<<arr[0]; 

    return 0;
}