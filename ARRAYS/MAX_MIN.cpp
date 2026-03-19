#include<iostream>
using namespace std;
int getMIN(int arr[],int size){
    int min=arr[0];
    for(int i=0;i<size;i++){
        if (arr[i]<min)
          min=arr[i];
    }
    return min;
}
int getMAX(int arr[],int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if (arr[i]>max)
          max=arr[i];
    }
    return max;
}
int main(){
    int num[100];
    int size;
    cin>>size;
    for(int i=0;i<size;i++)
        cin>>num[i];
    cout<<"Minimum of array is"<<getMIN(num,size)<<endl;
    cout<<"Maximum of array is"<<getMAX(num,size)<<endl;
    return 0;
}