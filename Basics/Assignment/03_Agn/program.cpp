#include<iostream>
using namespace std;

// Two numbers are given, print their product

int product(int a, int b){
    return a*b;
}

// Two numbers are given a and b, print a-b

void printNumber(int a, int b){
    cout<<a-b;
}

// Print 6*3 in output, don’t print 18, just 6*3 should be in the output screen.

void print_2(){
    cout<<"6*3";
}

int main(){
    // cout<<product(5,8);
    // printNumber(7,2);
    print_2();
    return 0;
}