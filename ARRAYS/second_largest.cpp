#include<iostream>
#include<climits>
using namespace std;
int second_largest(int arr[],int n){
    int largest=INT_MIN;
    int second_largest=INT_MIN;
    for(int i=0;i<n;i++){
        if (arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]>second_largest && arr[i]<largest){
            second_largest=arr[i];
        }
    }
    return second_largest;
}
int main(){ 
    int arr[100]={10,98,87,43,97,31,63 ,986,740};
    int n= sizeof(arr)/sizeof(arr[0]);
    int result;
    result= second_largest(arr,n);
    cout<<"Second largest number is "<<result;
}