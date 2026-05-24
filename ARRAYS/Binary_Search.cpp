#include<iostream>
using namespace std;
int Binary_Search(int arr[],int n,int target){
    int beg=0;
    int end=n-1;
    while(beg<=end){
        int mid=(beg+end)/2;
        if(arr[mid]==target)
            return mid;
        else if(arr[mid]>target)
            end=mid-1;
        else
            beg=mid+1;
    }
    return -1;
}
int main(){
   int arr[100]={2,5,7,9,10,11};
   int target;
   int size=6;
   cout<<"Enter element to search : ";
   cin>>target;
   int result=Binary_Search(arr,size,target);
   if(result!=-1)
    cout<<target<<" Element found at position "<<result;
   else
    cout<<"Element not found";
}
  