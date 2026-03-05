#include <iostream>
using namespace std;  


int main() {

int n;
cout<<"enter n"<<endl;
cin>>n;
int sum=0;
for(int i=1;i<=n;i++){
    cout<<i<<"  ";   
    cout<<sum<<"  " ;
}
int i=1;
int sum=0;
for (i=1;i<=n;i++){
    sum=sum+i;
    cout<<sum<<" ";
}


int a;
int b;
cout <<"Enter a  and b :"""<<endl;
cin>>a >>b;
int sum =a+b;
cout <<"sum of a and b ="<<sum<<endl;
  

int a =15;
int b=8;
int c=20;

if(a>b &&a>c){
    cout<<"a"<<endl;

}else if (b>a && b>c)
{
cout <<"b"<<endl;

}else{
    cout<<"c"<<endl;
}


for(int i=1;i<=5;i++){
           

    for(int j=i;j>=1;j-- ){
        
            cout<<"# # # # # # # "<<" "<<endl;
            cout<<"# # # # # #  "<<" "<<endl;
            cout<<"# # # # #  "<<" "<<endl;
            cout<<"# # # #   "<<" "<<endl;
        
    }

   
}


// @@by normal method

int n=10829;
int sum=0;

sum=(n%10)+(n/10)%10+(n/100)%10+(n/1000)%10+(n/10000);


cout <<sum;

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


// @@ revers digits as a single result not single single digit 

int n;
cout<<"enter a number: "<<endl;
cin>>n;
int res=0;
for(n;n>0;n=n/10){
res=res*10+(n%10);

}
cout<<res<<endl;

int n=3;
bool isPrime=true;

for(int i=2;i<=n-1;i++){
    if(n%i==0){
        // cout<<"number is non-prime";
        isPrime=false;
        break;
    }
}
if(isPrime==true){
    cout<<"number is prime";
}else{
    cout<<"number is non- prime";
}


// @@ fectorial

int n;
cout<<"enter a number: "<<endl;
cin>>n;
int fectorial=1;

for(n;n>0;n--){
fectorial=fectorial*n;
}
cout<<"fectoril: "<<fectorial;

//@@ print table by input user

int n;
cout<<"enter number"<<endl;
cin>>n;
int table;
for (int i=1;i<=10;i++){
table=n*i;
cout<<" "<<endl;
cout<<" "<<table ;
}


// @@ check armoston number

int n;
cout<<"enter a number: "<<endl;
cin>>n;
int armstronNum=0;
for(int i= n;i>0;i=i/10){
   int ldt=(i%10);
 
    int cubic;
    cubic=ldt*ldt*ldt;
   
    armstronNum=armstronNum+cubic;
}
cout<<"armstron : "<<armstronNum<<endl;
if(n==armstronNum){
    cout<<"number is armstron number"<<n<<endl;
}else{
    cout<<"number is not armstron number: ";
}
cout<<armstronNum;


// @@ given number is porime or not

int n;
cout<<"enter a number: "<<endl;
cin>>n;

for(int i=2;i<=n-1;i++){
    if(n%i==0){
        cout<<"this number is not prime number: "<<endl;
    }else{
        cout<<"number is prmie number";
    } 
    break;
}

    return 0;       
}