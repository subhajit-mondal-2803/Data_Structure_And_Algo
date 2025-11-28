#include<iostream>
using namespace std;

// Insertion sort
/*
    4 5 2 3 1
---> 4 5 | 2 3 1 
---> 4 2 5 3 1
     2 4 5 | 3 1
---> 2 4 3 5 1
     2 3 4 5 | 1
----> 2 3 4 1 5
      2 3 1 4 5
      2 1 3 4 5
      1 2 3 4 5

*/

    void insertion_sort(int arr[], int n){

        int i,j;

        for(int i = 1; i < n; i++){

            for( j = i; j > 0; j--){
                if(arr[j] < arr[j-1])
                    swap(arr[j],arr[j-1]);
                else
                    break;
            }
        }

        for(int i = 0; i < n; i++)
            cout<<arr[i]<<" ";

    }

// 1: Use Insertion Sort Algorithm to sort the array of integers in decreasing order.

    void insertion_sort_dec(int arr[], int n){

        int i,j;

        for(int i = 1; i < n; i++){

            for( j = i; j > 0; j--){
                if(arr[j] > arr[j-1])
                    swap(arr[j],arr[j-1]);
                else
                    break;
            }
        }

        for(int i = 0; i < n; i++)
            cout<<arr[i]<<" ";

    }

// 2: Insertion Sort Algorithm to sort the array of integers in increasing order if we start from the last element of the array. Question was explained in the class.

    void insertion_sort_inc(int arr[], int n){

        int i,j;

        for(int i = n-2; i >= 0; i--){

            for( j = i; j < n; j++){

                if(arr[j] >  arr[j+1])
                    swap(arr[j],arr[j+1]);
                else
                    break;
            }
        }

        for(int i = 0; i < n; i++)
            cout<<arr[i]<<" ";

    }





    int main(){

        int arr[5] = {4,5,2,3,1};

        // insertion_sort(arr, 5);
        // insertion_sort_dec(arr, 5);
        insertion_sort_inc(arr, 5);
        return 0;
    }