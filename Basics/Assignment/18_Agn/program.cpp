#include<iostream>
using namespace std;


// 1: Find the cube of a number using Function. 

    int getCube(int num){
        return num*num*num;
    }

// 2: Reverse a number n using Function, Constraints: -5000<=n<=5000

    int reverseNumber(int n){

        int rev = 0,rem;

        if( n >= -5000 && n <= 5000){
            
            while(n){
                rem = n%10;
                rev = rev *10 + rem;
                n /= 10;
            }

            return rev;
        }

        return 0;
    }

// 3: There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.

    void swapThree(int &a, int &b, int &c){
        
        int temp = c;

        c = b;
        b = a;
        a = temp;

    }


// 4: Swap 2 numbers a, b without using extra variables. Range of -10000<=a,b<=100000. 

    void swapNumber(int &a, int &b){

        if((a >= -10000 && a <= 100000) && ( b >= -10000 && b <= 100000)){
            a = a * b;
            b = a / b;
            a = a / b;
        }
        
    }

// 5: Print “Hello Coders” n times using Function.

    void print(int n){

        for(int i = 1; i<= n; i++){
            cout<<"Hello Coders"<<endl;
        }
    }

// 6: Given two numbers n, r. Find nCr (Combination). Use Function here.

    int getFactorial(int n){

        int fact = 1;

        for(int i = 2; i <= n; i++){
            fact *= i;
        }

        return fact;
    }

    int combination(int n, int r){

        return (getFactorial(n)/getFactorial(r)/getFactorial(n-r));
    }

int main(){

    // cout<<getCube(5);
    // cout<<reverseNumber(6087);

    // int a=10, b=20, c=30;
    // swapThree(a,b,c);
    // cout<<"a="<<a<<" b="<<b<<" c="<<c;

    // int a=145, b=43;
    // swapNumber(a,b);
    // cout<<"a="<<a<<" b="<<b;

    // print(10);

    cout<<combination(5,2);
    return 0;
}