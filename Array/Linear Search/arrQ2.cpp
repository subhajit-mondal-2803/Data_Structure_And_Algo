#include<iostream>
using namespace std;

int searchElement(int arr[],int size,int value){
    for(int index = 0; index<size;index++){
        if(arr[index] == value){
            return index;
        }
    }
    return -1;
}

int main(){
    int arr[5]={10,20,43,26,37};
    cout<<searchElement(arr,5,43);
}