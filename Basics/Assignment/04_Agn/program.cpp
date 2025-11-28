#include<iostream>
using namespace std;

// Two numbers are given, print the bigger number, It is given that both numbers can’t be the same

void printBigger(int a, int b){
    if(a == b)
        return;
    
    if(a>b){
        cout<<a;
    } else{
        cout<<b;
    }
}

// Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager.

void isAdult(){
    int age;
    cout<<"Enter your age : ";
    cin>>age;

    if(age > 18){
        cout<<"Adult";
    } else{
        cout<<"Teenager";
    }
}

// Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.

void printMonth(int month){

    if(month <= 0)
        return;
    
    if(month == 1)
        cout<<"January";
    else if(month == 2)
        cout<<"February";
    else if(month == 3)
        cout<<"March";
    else if(month == 4)
        cout<<"April";
    else if(month == 5)
        cout<<"May";
    else if(month == 6)
        cout<<"June";
    else if(month == 7)
        cout<<"July";
    else if(month == 8)
        cout<<"August";
    else if(month == 9)
        cout<<"September";
    else if(month == 10)
        cout<<"October";
    else if(month == 11)
        cout<<"November";
    else if(month == 12)
        cout<<"December";
    else{
        cout<<"enter a valid month";
    }
}

// Ticket Price Calculator: Create a program that asks the user for their age and checks if they qualify for a discounted ticket price (e.g., under 12 and over 65 get discounts), If they are eligible print “YES” else “NO”.

void price_calculator(int age){
    if(age < 12)
        cout<<"Eligible for discount";
    else if(age>12 && age<65)
        cout<<"Not eligible for discount";
    else
        cout<<"Eligible for discount";
}

// Print “India will win the World Cup 2023”, 20 times.

void cheer(){
    for(int i = 1; i <= 20; i++){
        cout<<"India will win the World Cup 2023"<<endl;
    }
}


// Print all Odd numbers from 1 to n, take n as an input from the user.

void print_odd(){
    int n;

    cout<<"Enter the number, upto which you want odd numbers : ";
    cin>>n;

    for(int i = 1; i <= n ;i++){
        if(i % 2 != 0){
            cout<<i<<" ";
        }
    }
}

// Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.

void print_divisibleBy_4(){
    int n;

    cout<<"Enter the number, upto which you want divisor of 4 : ";
    cin>>n;

    for(int i = 1; i <= n ;i++){
        if(i % 4 == 0){
            cout<<i<<" ";
        }
    }
}

int main(){
    // printBigger(65,74);
    // isAdult();
    // printMonth(5);
    // price_calculator(54);
    // cheer();
    // print_odd();
    print_divisibleBy_4();
    return 0;
}