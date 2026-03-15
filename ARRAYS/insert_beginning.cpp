#include<iostream>
using namespace std;
int main(){
    int element;
    cout<<"Enter an element you want to insert:";
    cin>>element;
    int arr[10]={100,200,300,400,500};
    int n=5;
    cout<<"Array Before Insertion\n";
    for (int i=0;i<n;i++)
        cout<<" "<<arr[i];
    for(int i=n-1;i>=0;i--)
        arr[i+1]=arr[i];
    arr[0]=element;
    n++;
    cout<<"\nAfter Insertion\n";
    for(int i=0;i<n;i++)
       cout<<" "<<arr[i];
    return 0;
}