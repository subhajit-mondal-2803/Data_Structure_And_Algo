#include<iostream>
using namespace std;

void printPattern1(){
    for(int row =1;row<=5;row++){
        for(int col = 1;col<=5-row;col++){
            cout<<"  ";
        }
        for(int col = 1;col<=2*row-1;col++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}


void printPattern2(){
    for(int row = 1;row<=5;row++){
        for(int col=1;col<=5-row;col++){
            cout<<"  ";
        }
        for(int col = 1;col<=row;col++){
            cout<<col<<" ";
        }
        for(int col = row-1;col>=1;col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}

void printPattern3(){
    for(int row =5 ;row>=1;row--){
        for(int col =1;col<=5-row;col++){
            cout<<"  ";
        }
        for(int col = 1;col<=2*row-1;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void printPattern4(){
    for(int row = 4;row>=1;row--){
        for(int col = 1 ;col<=row;col++){
            cout<<"* ";
        }
        for(int col =1;col<=8-2*row;col++){
            cout<<"  ";
        }
        for(int col = 1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }

     for(int row = 1;row<=4;row++){
        for(int col = 1 ;col<=row;col++){
            cout<<"* ";
        }
        for(int col =1;col<=8-2*row;col++){
            cout<<"  ";
        }
        for(int col = 1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}


void printPattern5(int n){
    for(int row =1;row<=n;row++){
        for(int col = 1;col<=row;col++){
            cout<<"* ";
        }
        for(int col = 1;col<=2*n-2*row;col++){
            cout<<"  ";
        }
        for(int col = 1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int row =n-1;row>=1;row--){
        for(int col = 1;col<=row;col++){
            cout<<"* ";
        }
        for(int col = 1;col<=2*n-2*row;col++){
            cout<<"  ";
        }
        for(int col = 1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void printPattern6(){
    for(int row=1;row<=4;row++){
        for(int col=1;col<=4-row;col++){
            cout<<" ";
        }
        for(int col =1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
     for(int row=4;row>=1;row--){
        for(int col=1;col<=4-row;col++){
            cout<<" ";
        }
        for(int col =1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){

    printPattern6();
    return 0;
}