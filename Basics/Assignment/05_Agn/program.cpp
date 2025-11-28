#include<iostream>
using namespace std;

// Print number from 280 to 250 with the help of for loop.

void print_1(){
    for(int i = 280; i >= 250; i--){
        cout<<i<<" ";
    }
}

// Print char from ‘A’ to ‘Z’ with the help of a for loop.

void print_2(){
    for(char ch = 'A' ; ch <= 'Z'; ch++){
        cout<<ch<<" ";
    }
}

// Print char from ‘Z’ to ‘A’ with the help of a for loop

void print_3(){
    for(char ch = 'Z'; ch >= 'A'; ch--){
        cout<<ch<<" ";
    }
}

// There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP.

void print_4(){
    for(int i = 220; i <= 730; i+=7){
        cout<<i<<" ";
    }
}


// Print Sum of square of first n natural number.

void sum_square(){
    int n,sum=0;
    
    cout<<"Enter n : ";
    cin>>n;

    for(int i = 1; i<=n; i++){
        sum += i*i;
    }

    cout<<"Sum is : "<<sum;
}

// Print Sum of cube of first n natural number

void sum_cube(){
    int n,sum=0;
    
    cout<<"Enter n : ";
    cin>>n;

    for(int i = 1; i<=n; i++){
        sum += i*i*i;
    }

    cout<<"Sum is : "<<sum;
}

// Print n’th Fibonacci number.

void fibonacci(){
    int a=0,b=1;
    int n;
    
    cout<<"Enter n : ";
    cin>>n;

    if(n-1 == 0 || n-1 == 1){
       cout<<n-1;
       return;
    }

    int i = 3,temp;

    while(i != n){
        temp = a + b;
        a = b;
        b = temp;
    }

    cout<<"fibonacci number is "<<b;
}

int main(){
    // print_1();
    // print_2();
    // print_3();
    // print_4();
    // sum_square();
    // sum_cube();
    fibonacci();
    return 0;
}