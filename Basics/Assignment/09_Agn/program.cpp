#include<iostream>
using namespace std;


    //  1
    //  1 2
    //  1 2 3
    //  1 2 3 4
    //  1 2 3 4 5 
    //  1 2 3 4 5 6 

    void print_1(){
        for(int row = 1; row <= 6; row++){
            for(int col=1; col<= row; col++){
                cout<<col<<" ";
            }
            cout<<endl;
        }
    }


    // A
    // A B
    // A B C
    // A B C D
    // A B C D E

    void print_2(){
        for(int row = 1; row <= 5; row++){
            for(int col=0; col<= row-1; col++){
                cout<<char('A'+ col)<<" ";
            }
            cout<<endl;
        }
    }

    //    10
    //    10 11
    //    10 11 12
    //    10 11 12 13
    //    10 11 12 13 14
    //    10 11 12 13 14 15

    void print_3(){
        for(int row = 1; row <= 6; row++){
            for(int col = 10; col < row + 10; col++){
                cout<<col<<" ";
            }
            cout<<endl;
        }
    }


    //   A B C D
    //   A B C
    //   A B
    //   A

    void print_4(){
        for(int row = 4; row >= 1; row-- ){
            for(int col = 1; col <= row; col++ ){
                char ch = 'A'+col-1;
                cout<< ch <<" ";
            }
            cout<<endl;
        }
    }


    int main(){
        // print_1();
        // print_2();
        // print_3();
        print_4();

        return 0;
    }