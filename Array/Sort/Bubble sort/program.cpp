#include<iostream>
using namespace std;


// Bubble sort

    void bubble_sort(int arr[], int n){

        int i,j;
        int isSwapped;

        for(i = n-2; i>=0; i--){

            isSwapped = 0;

            for(j = 0; j <= i; j++){

                if(arr[j] > arr[j+1]){
                    swap(arr[j], arr[j+1]);
                    isSwapped = 1;
                }
            }

            if(isSwapped == 0)
                break;
        }
    }

    void printArray(int arr[], int n){

        for(int i = 0; i < n; i++){
            cout<<arr[i]<<" ";
        }
        
        cout<<endl;
    }


// 1: Use Bubble Sort Algorithm to sort the array of integers in decreasing order.

    void bubble_sort_dec(int arr[], int n){

        int i,j,isSwapped;

        for(int i = n-2; i >=0; i--){

            isSwapped = 0;

            for(int j = 0; j <= i; j++){
                if(arr[j]<arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    isSwapped = 1;
                }
            }

            if(isSwapped == 0)
                break;
        }
    }


// 2: Bubble Sort Algorithm to sort the array of integers in increasing order by taking the smallest number to first place by starting from the last. Question was explained in the class.

    void bubb_sort_inc(int arr[], int n){
        int i,j;
        int isSwapped;

        for(i= 0; i < n-1; i++){

            isSwapped = 0;
            for(j=n-1; j >=i; j--){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    isSwapped = 1;
                }
            }

            if(isSwapped == 0)
                break;
        }
    }


// 3: Bubble Sort Algorithm to sort the array of char in ascending order.

    void bubble_sort_char(char arr[], int n){

        int i,j;
        int isSwapped;

        for(i = n-2; i>=0; i--){

            isSwapped = 0;

            for(j = 0; j <= i; j++){

                if(arr[j] > arr[j+1]){
                    swap(arr[j], arr[j+1]);
                    isSwapped = 1;
                }
            }

            if(isSwapped == 0)
                break;
        }


        for(int i = 0; i < n; i++){
            cout<<arr[i]<<" ";
        }

    }



    int main(){

        // int arr[6] = {10,8,2,3,1,4};
        char arr[6] = {'z','d','x','r','a','s'};

        // bubble_sort(arr, 6);
        // bubble_sort_dec(arr, 6);
        // printArray(arr, 6);
        // bubb_sort_inc(arr, 6);
        bubble_sort_char(arr,6);
        // printArray(arr, 6);
        return 0;
    }