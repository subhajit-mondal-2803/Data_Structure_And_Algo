#include<iostream>
using namespace std;


    // First Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

     //        1
    //       2 1
    //     3 2 1
    //   4 3 2 1
    // 5 4 3 2 1  

    void print_1(int n){
        for(int row = 1; row <= n; row++){
            // printing space
            for(int col = 1; col <= n-row; col++){
                cout<<"  ";
            }

            // printing value
            for(int col = row; col > 0; col--){
                cout<<col<<" ";
            }

            cout<<endl;
        }
    }



    // Second Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

        //           A
        //         B B
        //       C C C
        //     D D D D
        //   E E E E E

        void print_2(int n){
            for(int row = 1; row <= n; row++){

                // space
                for(int col = 1; col <= n-row; col++){
                    cout<<"  ";
                }
                
                // print
                for(int col = 1; col <= row; col++){
                    char ch = 'A'+row-1;
                    cout<<ch<<" ";
                }

                cout<<endl;
            }
        }


    // Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

            //          5
            //        5 4
            //      5 4 3
            //    5 4 3 2 
            //  5 4 3 2 1

         void print_3(int n){

            for(int row = n; row >= 1; row--){

                for(int col = 1; col <= row -1; col++)
                     cout<<"  ";

                for(int col= n; col >= row; col--)
                     cout<<col<<" ";

                cout<<endl;
            }
        }

    
     // Fourth Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this

            //          E
            //        E D
            //      E D C
            //    E D C B
            //  E D C B A

            void print_4(int n){

                for(int row = n; row >= 1; row--){

                    for(int col = 1; col <= row -1; col++)
                        cout<<"  ";
                    
                    for(int col =n; col >= row; col--){
                        char ch = 'A'+col-1;
                        cout<<ch<<" ";
                    }

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