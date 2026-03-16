#include <iostream>
using namespace std;
#include <algorithm>
#include <climits>

int AreaOfRainWater(int height[],int n){
    int leftMax[20000];
    leftMax[0]=height[0];
    int rightMax[20000];
    rightMax[n-1]=height[n-1];

    int trapWater=0;
    for(int i=1;i<n;i++){
        leftMax[i]=max(leftMax[i-1],height[i-1]);
        
        // cout<<leftMax[i]<<",";
    }
    cout<<endl;
    for(int i=n-2;i>=0;i--){
        rightMax[i]=max(height[i+1],rightMax[i+1]);

        // cout<<rightMax[i]<<",";
    }
    
    for(int i=0;i<n;i++){
        int currWater=min(leftMax[i],rightMax[i]);
        currWater-=height[i];
        if(currWater>0){
        trapWater+=currWater;
        }
    }
    cout<<trapWater<<endl;

return trapWater;
// Time Complexcity=n+n+n=3n==n
}

int main(){
 
    int height[]={4,2,0,6,3,2,5};
    int n=sizeof(height)/sizeof(int);
    AreaOfRainWater(height,n);

    return 0;
}