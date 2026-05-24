#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int size;
    cout<<"Enter size of an array";
    cin>>size;
    for(int i=0;i<size;i++)
        cin>>arr[i];
    int element;
    cout<<"Enter element to search:";
    cin>>element;
    int found=-1;
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            found=i;
            break;
        }
    }
    if(found==-1)
        cout<<"Element not found.."<<endl;
    else
        cout<<element<<" at position "<<found<<" in array ";
}