#include <iostream>
#include <utility>
using namespace std;
pair <int,int> two_sum(int arr[],int n,int target){
    int left=0;
    int right=n-1;
    int currentsum=0;
    while (left<right){
        currentsum=arr[left]+arr[right];
        if(currentsum==target){
            return {left,right};
        }
        else if (currentsum<target){
            left+=1;
        }
        else{
            right-=1;
        }
    }
    return{-1,-1};
}
int main(){
    int arr[]={1,2,3,5,7,10,11,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=15;
    pair <int,int> result= two_sum(arr,n,target);
    if(result.first==-1){
        cout<<"No pair found";
    }
    else{
        cout<< result.first<<" "<< result.second;
        return 0;
    }
}












