#include <iostream>
using namespace std;
#include <algorithm> 
#include <climits>

int BestSell(int arr[],int n){
    int bestbuy[100000];
    bestbuy[0]=INT_MAX;
    int bestProfit[0];
    for(int i=1;i<n;i++){
        bestbuy[i]=min(bestbuy[i-1],arr[i-1]);
        cout<<bestbuy[i]<<",";
        
    }
    int maxProfit=0;
    for(int i=0;i<n;i++){
        int currProfit=arr[i]-bestbuy[i];
        maxProfit=max(currProfit,maxProfit);
        
    }
    cout<<maxProfit<<endl;
}
//T.C= O(n+n)=O(2n)=O(n)
int main(){
    int arr[]={7,1,5,3,6,4};
    int n=sizeof(arr)/sizeof(int);
    BestSell(arr,n);

    return 0;
}
