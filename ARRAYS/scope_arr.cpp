#include<iostream>
using namespace std;
int update(int arr[],int n){
    arr[0]=1200;
    cout<<"Inside the Update Function"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    cout<<"Going Back to Main Function"<<endl;
}
int main(){
    int arr[]={1,1210,1220};
    update(arr,3);
    cout<<"Inside Main Function"<<endl;
    cout<<"Printing the Array"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}