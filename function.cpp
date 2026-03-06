#include <iostream>
using namespace std;


void sayHello(){
    cout<<"Hello :)";
}

int product(int a ,int b){
    int  prod=a*b;
    
 return prod;
}

bool isEven(int n){
    if(n%2==0){
    // cout<<"number is even";  this not good why to check in function
    return true;
    }else{
        // cout<<"number is not even";
        return false;
    }
}

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
         fact=fact*i;
    }
    cout<<fact;
}


int main (){
//    int prod= product(2,4);
    // cout<<prod;
  cout<<  isEven(3);
    // sayHello();

    factorial(5);                       
    return 0;
}