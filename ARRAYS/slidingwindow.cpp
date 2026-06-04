#include<iostream>
using namespace std;
int Maxsum_subarray(int arr[],int n,int w){
    int current=0;
    for(int i=0;i<w;i++){
        current+=arr[i];
    }
    int maxx=current;
    for(int i=1;i<=n-w;i++){
        current=current-arr[i-1]+arr[i+w-1];
        if(current>maxx){
            maxx=current;
        }
    }
    return maxx;
}
int main(){
    int arr[]={3,8,2,5,7,6,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    int w=4;
    int result=Maxsum_subarray(arr,n,w);
    cout<<"Max sum of subarray using sliding window is "<<result;
    return 0;
}