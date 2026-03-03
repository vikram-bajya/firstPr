#include <iostream>
using namespace std;  


int main() {

// int n;
// cout<<"enter n"<<endl;
// cin>>n;
// for(int i=1;i<=n;i++){
//     cout<<i<<"  ";   
//     cout<<sum<<"  " ;
// }
// int i=1;
// int sum=0;
// for (i=1;i<=n;i++){
//     sum=sum+i;
//     cout<<sum<<" ";
// }


// int a;
// int b;
// cout <<"Enter a  and b :"""<<endl;
// cin>>a >>b;
// int sum =a+b;
// cout <<"sum of a and b ="<<sum<<endl;
  

// int a =15;
// int b=8;
// int c=20;

// if(a>b &&a>c){
//     cout<<"a"<<endl;

// }else if (b>a && b>c)
// {
// cout <<"b"<<endl;

// }else{
//     cout<<"c"<<endl;
// }


// for(int i=1;i<=5;i++){
           

//     for(int j=i;j>=1;j-- ){
        
//             cout<<"# # # # # # # "<<" "<<endl;
//             cout<<"# # # # # #  "<<" "<<endl;
//             cout<<"# # # # #  "<<" "<<endl;
//             cout<<"# # # #   "<<" "<<endl;
        
//     }

   
// }


// @@by normal method

// int n=10829;
// int sum=0;

// sum=(n%10)+(n/10)%10+(n/100)%10+(n/1000)%10+(n/10000);


// cout <<sum;

// @@ useing loop


int n;
cout<<"enter a number: "<<endl;
cin>>n;

int sum=0;
 int odd=0;
 int even=0;
for(n;n>0;n=n/10){
    int ldt=n%10;
   

    cout<<ldt <<"  ";
    if(ldt%2!=0){
        odd+=ldt;
    }
    if(ldt%2==0){
        even+=ldt;
    }
    sum=sum+ldt;
    
}

cout<<"sum :"<<sum <<endl;
cout<<"Summ Of Odd Digits:"<<odd<<""<<endl;
cout<<"Summ Of even Digits:"<<even<<""<<endl;


    return 0;       
}