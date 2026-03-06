#include <iostream>
using namespace std;


int binToDic(int binNum){
int n=binNum;
int dicNum=0;
int pow=1;//2^1,2^2,...

// for(int i=0;i>=0;i=n/10){
//     int lsd=n%10;
//     dicNum=dicNum+(lsd*(2^pow));
//     pow++;
// }
while (n>0)
{
    int lsd=n%10;
    dicNum+=lsd*pow;
    pow=pow*2;
    n=n/10;
}

cout<<dicNum<<endl;
}

void decToBin(int decToNum){
    int n=decToNum;
    int pow=1;//10^1,10^2 ....
    int binNum=0;

    while (n>0)
    {
        int rem=n%2;
        binNum+=rem*pow;
        n=n/2;
        pow=pow*10;

    }
    cout<<binNum<<endl;
    
}



int main(){
  binToDic(101);
  decToBin(4);
    return 0;
}