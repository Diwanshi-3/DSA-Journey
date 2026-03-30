#include <iostream>
using namespace std;

int main(){
    int arr[100]={10,20,30,40,50};
    int size=5;
    cout<<"ARRAY BEFORE DELETION:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    int pos;
    cout<<"\nEnter the position (0 based indexing): ";
    cin>>pos;
    if(pos<0 || pos>size){
        cout<<"Invalid Position.."<<endl;
    }
    else{
        for(int i=pos;i<size-1;i++){
            arr[i]=arr[i+1];
        }
        size=size-1;
    }
    cout<<"ARRAY AFTER DELETION:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}