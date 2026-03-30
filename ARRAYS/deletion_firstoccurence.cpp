#include <iostream>
using namespace std;
int main(){
    int arr[100]={10,20,30,20,30};
    int size=5;
    cout<<"ARRAY BEFORE DELETION:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    int element;
    cout<<"\nEnter element you want to delete: ";
    cin>>element;
    int pos=-1;
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            pos=i;
            break;
        }
    }
    if(pos!=-1){
        for(int i=pos;i<size-1;i++){
            arr[i]=arr[i+1];
        }
    size=size-1;
    }
    else{
        cout<<"ELEMENT NOT FOUND.."<<endl;
    }
    cout<<"ARRAY AFTER DELETION:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}