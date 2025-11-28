#include<iostream>
using namespace std;


// 1: Take 20 elements from user input and find its sum with the help of an array.

    int inputArray(int arr[], int n){

        cout<<"Enter"<<n<<" numbers : ";
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        
    }

    int sum(int arr[], int n){

        int sum = 0;

        for(int i = 0;i<n;i++){
            sum += arr[i];
        }

        return sum;
    }


// 2: Calculate the average of elements in an array of size 18.

    int average(int arr[], int n){

        int total = sum(arr, n);

        return total/n;
    }


// 3: Find the index of a specific element in an array, if the element is  nor present, print -1. Ask the size of the array from the user and then implement it.

    int indexOf(int element, int arr[], int n){

        int index = 0;

        while(index < n){
            if( element == arr[index])
                return index;
            index++;
        }

        return -1;


    }

// 4: Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.

    void printCharArr(){

        char arr[26],index;

        for(char ch = 'A',index=0; ch <= 'Z'; ch++,index++){
            arr[index] = ch;
        }

        for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); 
            i++){
            cout<<arr[i]<<" ";
        }
    }


// 5: Find the second largest element in an array of unique elements of size n. Where n>3.

    int secondMax(int arr[], int n){

        int max = INT32_MIN;

        for(int i = 0; i < n; i++){
            if(arr[i] > max)
                max = arr[i];
        }

        int secondMax = INT32_MIN;

        for(int i = 0; i < n ; i++){
            if(arr[i] > secondMax && arr[i] != max ){
                secondMax = arr[i];
            }
        }

        return secondMax;
    }


// 6: Find the third smallest element in an array of unique elements size n. Where n>3.

    int thirdSmallestElement(int arr[], int n){

        int min = INT32_MAX;

        for(int i = 0; i < n; i++){
            if(arr[i] < min)
                min = arr[i];
        }
        
        int secondMin = INT32_MAX;

        for(int i = 0; i < n; i++){
            if(arr[i] < secondMin && arr[i] != min){
                secondMin = arr[i];
            }
        }

        int thirdMin = INT32_MAX;

         for(int i = 0; i < n; i++){
            if(arr[i] < thirdMin && arr[i] != min && arr[i] != secondMin){
                thirdMin = arr[i];
            }
        }

        return thirdMin;
    }

int main(){

    // int arr[18];
    // inputArray(arr, 18);
    // cout<<"Average : "<<average(arr, 18);

    // int arr[100], n;

    // cout<<"Enter the array size : ";
    // cin>>n;

    // inputArray(arr, n);

    // int element;
    // cout<<"Enter the element to be search : ";
    // cin>>element;

    // cout<<"Index of "<<element<<" is "<<indexOf(element,arr, n);

    // printCharArr();

    int arr[8]={12,8,7,15,1,23,9,18};

    // cout<<secondMax(arr, 8);
    cout<<thirdSmallestElement(arr, 8);
    return 0;
}