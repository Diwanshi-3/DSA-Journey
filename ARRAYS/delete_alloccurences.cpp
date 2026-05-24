#include<iostream>
using namespace std;
int main(){
    int arr[100]={10,20,20,20,30,40,20};
    int size=7;
    int element;
    cout<<"Enter element:";
    cin>>element;
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            for(int j=i;j<size;j++){
                arr[j]=arr[j+1];
            } 
            size--;
            i--;
        }
    }
    for(int i=0;i<size;i++){
        cout<<" "<<arr[i];
    }
    return 0;
}
