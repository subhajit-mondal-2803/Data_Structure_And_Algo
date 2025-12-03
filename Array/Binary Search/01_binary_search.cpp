#include<iostream>
using namespace std;


// Binary search

    int binarySearch(int arr[], int n, int target){

        int start = 0, end = n-1, mid;

        while(start <= end){

            mid = start + ((end-start)/2);

            if(arr[mid] == target) // if found
            return mid;
            else if( arr[mid] < target) // element > mid
            start = mid+1;
            else
            end = mid-1;
        }

        return -1; // if not found
    }


// 1: An array is given in decreasing order with Key, Find the index of key, if key is not present, print -1;

    int binarySearchDecr(int arr[], int n, int target){

        int start = 0, end = n-1, mid;

        while(start <= end){

            mid = start + ((end-start)/2);

            if(arr[mid] == target)
            return mid;
            else if(arr[mid] < target)
            end = mid-1;
            else
            start = mid+1;

        }

        return -1;
    }




int main(){

    int arr[1000],target;

    int n;
    cout<<"Enter the size : ";
    cin>>n;

    cout<<"Enter elements : ";
    for(int i = 0; i < n; i++)
    cin>>arr[i];

    cout<<"Enter element you want to find : ";
    cin>>target;

    // cout<<binarySearch(arr, n, target);
    cout<<binarySearchDecr(arr, n, target);

    return 0;
}