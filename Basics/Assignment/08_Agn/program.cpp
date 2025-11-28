#include<iostream>
using namespace std;


    //    4 4 4 4 4 4
    //    4 4 4 4 4 4
    //    4 4 4 4 4 4  
    //    4 4 4 4 4 4
    //    4 4 4 4 4 4 

    void print_1(){
        for(int row = 1; row <= 5; row++){
            for(int col = 1; col <=6; col++){
                cout<<"4"<<" ";
            }
            cout<<endl;
        }
    }

    // 1 4 9 16 25
    // 1 4 9 16 25
    // 1 4 9 16 25
    // 1 4 9 16 25
    // 1 4 9 16 25
    // 1 4 9 16 25

    void print_2(){
        for(int row = 1; row <= 6; row++){
            for(int col = 1; col <=5; col++){
                cout<<col*col<<" ";
            }
            cout<<endl;
        }
    }


    // 1 8 27 64 125 216
    // 1 8 27 64 125 216
    // 1 8 27 64 125 216
    // 1 8 27 64 125 216
    // 1 8 27 64 125 216

    void print_3(){
        for(int row = 1; row <= 5; row++){
            for(int col = 1; col <=6; col++){
                cout<<col*col*col<<" ";
            }
            cout<<endl;
        }
    }

    // F G H I J K  
    // F G H I J K
    // F G H I J K
    // F G H I J K
    // F G H I J K

    void print_4(){
        for(int row = 1; row <= 5; row++){
            for(char ch= 'F'; ch <='K'; ch++){
                cout<<ch<<" ";
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