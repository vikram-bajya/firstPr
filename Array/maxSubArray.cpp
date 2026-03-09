#include <iostream>
using namespace std;
#include <algorithm> // For max()
#include <climits>

// void MaxSubArrPrint(int arr[],int n){
//     int maxSum= INT16_MIN;
//     for(int start=0;start<n;start++){
//         for(int end=start;end<=n;end++){
//             int sum=0;
//             for(int i=start;i<end;i++){
//                 int num=arr[i];
//                 sum=sum+num;
//             }
//             cout<<sum;
//             cout<<",";
//             maxSum=max(maxSum,sum);//using max function give which is max prebuild function in c++

            
//         }
//         cout<<endl;
//     }
// cout<<"max of sum in subArray is:= "<<maxSum;
// }



// void MaxSubArrPrint2(int arr[],int n){
//     int maxSum= INT_MIN;
//     for(int start=0;start<n;start++){
//         int sum=0;
//         for(int end=start;end<n;end++){
//                 sum=sum+arr[end];
            
            // cout<<sum;
            // cout<<",";
            // maxSum=max(maxSum,sum);//using max function give which is max prebuild function in c++

            
//         }
     
//     }
// cout<<"max of sum in subArray is:= "<<maxSum;
// }

// int main (){
//     int arr[]={2,-3,6,-5,4,2};
//     int n=sizeof(arr)/sizeof(int);
//     MaxSubArrPrint2(arr,n);
//     return 0;
// }
