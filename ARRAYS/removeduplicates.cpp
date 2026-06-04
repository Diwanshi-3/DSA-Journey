#include<iostream>
using namespace std;
int remove_duplicates(int arr[],int n){
    int x=0;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[x]){
            x=x+1;
            arr[x]=arr[i];
        }
    }
    return x+1;
    }
int main(){
    int arr[]={5,5,7,7,8,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int a=remove_duplicates(arr,n);
    for(int i=0;i<a;i++){
        cout<<" "<<arr[i];
    }
    return 0;
}
