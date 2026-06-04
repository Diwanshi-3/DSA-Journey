#include <iostream>
#include<climits>
using namespace std;
int MaxSum_Subarray(int arr[],int n,int w){
    int maxx=INT_MIN;
    for(int i=0;i<=n-w;i++){
        int current=0;
        for(int j=i;j<=i+w-1;j++){
            current=current+arr[j];
        }
        maxx=max(current,maxx);
    }
    return maxx;
}
int main(){
    int arr[]={1,56,43,2,6,21,56,85,1,2,4,789,4,2,57,8,653,2,34,45};
    int w=4;
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=MaxSum_Subarray(arr,n,w);
    cout<<"Maximum Sum of Subarray is "<<result;
    return 0;
}