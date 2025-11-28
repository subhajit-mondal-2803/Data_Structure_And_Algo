#include<iostream>
using namespace std;


// First Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

    //          *
    //        *  *
    //      *  *  *
    //     *  *  *  *
    //   *  *  *  *  *    

    void print_1(int n){

        for(int row =1; row<= n; row++){

            for(int col = 1; col <= n-row; col++)
                cout<<" ";
            
            for(int col = 1; col <= row; col++){
                cout<<"* ";
            }

            cout<<endl;
        }
    }


// Second Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
   
    //         1
    //       1 2 3
    //     1 2 3 4 5
    //   1 2 3 4 5 6 7
    // 1 2 3 4 5 6 7 8 9

    void print_2(int n){
        for(int row = 1; row <= n; row++){

            for(int col = 1; col <= n-row; col++)
                cout<<"  ";

            for(int col = 1; col <= row*2-1; col++){
                cout<<col<<" ";
            }

            cout<<endl;
        }
    }



// Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.


    //            A
    //          A B A
    //        A B C B A
    //      A B C D C B A
    //    A B C D E D C B A

     void print_3(int n){
        for(int row = 1; row <= n; row++){

            for(int col = 1; col <= n-row; col++)
                cout<<"  ";

            for(int col = 1; col <= row; col++){
                char ch = 'A'+col-1;
                cout<<ch<<" ";
            }

            for(int col = row-1; col >=1; col--){
                char ch = 'A'+col-1;
                cout<<ch<<" ";
        
            }

            cout<<endl;
        }
    }



// Fourth Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

    //         *
    //        *  *
    //      *  *  *
    //    *  *  *  *
    //   *  *  *  *  *
    //   *  *  *  *  *
    //    *  *  *  *
    //      *  *  *  
    //       *  *  
    //        *

    void print_4(int n){

        for(int row = 1; row<=n; row++){
            
            for(int col = 1; col <= n-row; col++)
                cout<<" ";
            
            for(int col = 1; col <= row; col++)
                cout<<"* ";

            cout<<endl;
        }

        for(int row = n; row >= 1; row--){
            
            for(int col = 1; col <= n-row; col++)
                cout<<" ";
            
            for(int col = 1; col <= row; col++)
                cout<<"* ";

            cout<<endl;
        }
    }





    int main(){
        int n;

        cout<<"Enter n : ";
        cin>>n;

        // print_1(n);
        // print_2(n);
        // print_3(n);
        print_4(n);
        return 0;
    }