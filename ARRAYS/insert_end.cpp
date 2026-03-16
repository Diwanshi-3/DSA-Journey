#include<iostream>
using namespace std;
int main(){
    int arr[100]={10,20,30,40,50};
    int size=5;
    cout<<"Before Insertion:"<<endl;
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    int element=60;
    arr[size]=element;
    size=size+1;
    cout<<"\nAfter Insertion:"<<endl;
    for (int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    return 0;
}