// @@ important ALGORITHIM

// #include <iostream>
// using namespace std;
// #include <algorithm> // For max()
// #include <climits>


// void kadanesAlog(int arr[],int n){
//     int currSum=0;
//     int maxSum=INT_MIN;
//     for(int start=0;start<n;start++){
//         currSum+=arr[start];
//         maxSum=max(maxSum,currSum);
//         if(currSum<0){
//             currSum=0;
//         }

//     }
//     cout<<maxSum<<endl;
// }

// int main(){
//     int arr[]={2,-3,6,-5,4,2};
//     int n=sizeof(arr)/sizeof(int);
//     kadanesAlog(arr,n);

//     return 0;
// }