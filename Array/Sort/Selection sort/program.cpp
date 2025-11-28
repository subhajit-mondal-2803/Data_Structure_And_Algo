#include<iostream>
using namespace std;

// Selection sort

    void selectionSort(int arr[], int n){

        int i,j;
        int index;
        for(i = 0; i < n-1; i++){
            index = i;
            for(j = i+1; j < n; j++){
                if(arr[j] < arr[index])
                    index = j;
            }

            swap(arr[i], arr[index]);
        }

        for(i = 0; i < n; i++){
            cout<<arr[i]<<" ";
        }

    }

// 1: Selection Sort Algorithm to sort the array of integers in decreasing order.

    void selection_sort_decending(int arr[], int n){

        int i,j,index;

        for(i = 0; i < n-1; i++){
            index = i;
            for( j = i+1; j < n; j++){
                if(arr[j] > arr[index])
                    index = j;
            }

            swap(arr[i],arr[index]);

        }

        for(i = 0; i < n; i++){
            cout<<arr[i]<<" ";
        }
    }


// 2: Selection Sort Algorithm to sort the array of integers in increasing order by taking the highest number to last place. Question was explained in the class. 

    void selec_sort_inc_hi(int arr[], int n){
        int i,j,index;

        for(i = n-1; i > 0; i--){
            index = i;
            for( j = i-1; j >= 0; j--){
                if(arr[j] > arr[index])
                    index = j;
            }

            swap(arr[i],arr[index]);
        }

        for(i = 0; i < n; i++){
            cout<<arr[i]<<" ";
        }
    }


// 3: Selection Sort Algorithm to sort the array of char in ascending order.

    void selec_sort_char(char arr[], int n){

        int i,j,index;

        for(i = 0; i < n-1; i++){
            index = i;
            for(j = i+1; j < n;j++){
                if(arr[j] < arr[index])
                    index = j;
            }

            swap(arr[i], arr[index]);
        }

        for(i = 0; i < n; i++){
            cout<<arr[i]<<" ";
        }
    }



int main(){

    // int arr[6] ={10,8,2,3,1,4};
    char arr[6]={'r','e','b','a','s','h'};

    // selectionSort(arr, 6);
    // selection_sort_decending(arr, 6);
    // selec_sort_inc_hi(arr, 6);
    selec_sort_char(arr, 6);
    return 0;
}