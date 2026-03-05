#include <iostream>
using namespace std;

int main (){

    // for (int i=4;i>=1;i--){
    //     for(int j=i;j>=1;j--){
         
    //         cout<<"*"<<" ";
         
            
    //     }
    //     cout<<endl;
    // }
// int n=5;
//     for (int i=1;i<=4;i++){
//         for(int j=1;j<=i;j++){
//          cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// output

// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 

// char ch='A';
// for(int i=1;i<=5;i++){
//     for(int j=1;j<=i;j++){
//         cout<<ch;
//         ch++;


//     }
//     cout<<endl;
// }

// @ output
// A
// BC
// DEF
// GHIJ
// KLMNO

// int n=6;
// for(int i=1;i<=n;i++){
//     cout<<"*";
//     for(int j=1;j<=n-1;j++){
//         if(i==1||i==n){
//             cout<<"*";
//         }else{
//             cout<<" ";

//         }
//     }
//     cout<<"*"<<endl;
// }

// *******
// *     *
// *     *
// *     *
// *     *
// *******

// int n=4;
// for (int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
         
//             cout<<" ";
    
//         }
//         for(int k=1;k<=i ;k++){
//                 cout<<"*";

//             }
//         cout<<endl;
//     }
//    *
//   **
//  ***
// ****

// int n=1;

// for(int i=1;i<=5;i++){
//     for(int j=1;j<=i;j++){
//     cout<<n++<<" ";
//    }
//    cout<<endl;


// }

// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15


// @@@ this not good code still it is work  but more line of code we writen

// int n=4;

// for(int i=1;i<=n;i++){
//     for(int j=i;j<=n;j++){
//         cout<<" ";
//     }
//     for(int j=i;j>=1;j--){
//         cout<<"*";
//     }
//     for(int j=i+1;j>=n-1;j--){

//         cout<<"*";
        
//     }
//     cout<<endl;
// }
            
//     *
//    ***
//   *****
//  *******

// @@@ this one is best prectic 
// int n=10;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         cout<<" ";
//     }
    
//     for(int j=1;j<=2*i-1;j++){
        
//         cout<<"*";
//     }
   
//     cout<<endl;
// }
 
//          *
//         ***
//        *****
//       *******
//      *********
//     ***********
//    *************
//   ***************
//  *****************
// *******************


// int n=4;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=2*i-1;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }for(int i=n;i>=1;i--){
//     for(int j=1;j<=n-i;j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=2*i-1;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *

// int n=7;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){

//         cout<<"*";
//     }
//     for(int j=1;j<=2*(n-i);j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// for(int i=n;i>=1;i--){
//     for(int j=1;j<=i;j++){

//         cout<<"*";
//     }
//     for(int j=1;j<=2*(n-i);j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// *            *
// **          **
// ***        ***
// ****      ****
// *****    *****
// ******  ******
// **************
// **************
// ******  ******
// *****    *****
// ****      ****
// ***        ***
// **          **
// *            *



    return 0;
}