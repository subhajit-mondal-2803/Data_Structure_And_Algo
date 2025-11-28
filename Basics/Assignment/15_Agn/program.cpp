#include<iostream>
using namespace std;


// 1: Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.

    void ques_1(){

        int n;

        cout<<"Enter n : ";
        cin>>n;

        int i = 0;
        // while( i <= n){
        //     if( i%2 == 0)
        //         cout<<i<<" ";
        //     i++;
        // }

        do{
            if(i%2 == 0)
                cout<<i<<" ";
            i++;
        }while( i<= n);

    }

// 2: Find the factorial of a number n using a while loop and do a while loop.

    void factorial(){

        int n;

        cout<<"Enter n : ";
        cin>>n;

        int i=1,fact=1;

        while( i <= n){
            fact *= i;
            i++;
        }

        cout<<"Factorial of "<<n<<" is : "<<fact;
    }


// 3: Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. (use Continue here).

    void ques_3(){

        int n;

        cout<<"Enter n : ";
        cin>>n;

        int i=1;

        // without continue
        // while( i <= n){
        //     if(!(i%3 == 0 && i%5 == 0))
        //         cout<<i<<" ";
        //     i++;
        // }

        while( i <= n){

            if(i%3 == 0 && i%5 == 0){
                i++;
                continue;
            }
            cout<<i<<" ";
            i++;
        }

    }


// 4: Given a number n, print the corresponding month of it. For n=1, print Jan, n=2, print Feb…, if the user puts any invalid number, don’t do anything. (Use switch here)

    void print_month(){

        int n;

        cout<<"Enter n : ";
        cin>>n;

        switch (n)
        {
            case 1:
                cout<<"January";
                break;
            case 2:
                cout<<"February";
                break;
            case 3:
                cout<<"March";
                break;
            case 4:
                cout<<"April";
                break;
            case 5:
                cout<<"May";
                break;
            case 6:
                cout<<"June";
                break;
            case 7:
                cout<<"July";
                break;
            case 8:
                cout<<"August";
                break;
            case 9:
                cout<<"September";
                break;
            case 10:
                cout<<"October";
                break;
            case 11:
                cout<<"November";
                break;

            case 12:
                cout<<"December";
                break;
            default:
                cout<<"Invalid month";
                break;
        }
    }



// 5: Print all the Capital and small letters  using a while loop. It means A-Z, then a-z.

    void print_letter(){

        char ch = 'A';
        while(ch <='Z'){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;

        ch = 'a';
        while(ch <= 'z'){
            cout<<ch<<" ";
            ch++;
        }
    }


// 6: Give a number n, find if it is prime or not, use a while loop and break here to solve it.

    void isPrime(){
        
        int n;

        cout<<"Enter n : ";
        cin>>n;

        int i = 2;
        while(i<n){
            if( n%i == 0){
                break;
            }
            i++;
        }

        if(i == n)
            cout<<"Prime";
        else
            cout<<"Not prime";
    }


    int main(){

        // ques_1();
        // factorial();
        // ques_3();
        // print_month();
        // print_letter();
        isPrime();

        return 0;
    }