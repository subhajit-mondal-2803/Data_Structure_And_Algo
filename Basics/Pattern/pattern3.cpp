#include<iostream>
using namespace std;


void printPattern9(int n){
    int col;
    for(int row = 1;row<=n;row++){
        for(col = 1;col<=n-row;col++){
            cout<<" "<<" ";
        }
        for(col = 1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void printPattern10(int n){
    for(int row = 1;row<=n;row++){
        for(int col= 1;col<=n-row;col++){
            cout<<"  ";
        }
        for(int col = 1;col<=row;col++){
            cout<<row<<" ";
        }
        cout<<endl;
    }
}

void printPattern11(){
    for(int row = 1;row<=5;row++){
        for(int col = 1;col<=5-row;col++){
            cout<<"  ";
        }
        for(int col = 1;col<=row;col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}

void printPattern12(){
    for(int row =1;row<=5;row++){
        for(int col = 1;col<=5-row;col++){
            cout<<"  ";
        }
        for(int col=1;col<=row;col++){
            char ch = 'A'+(col - 1);
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void printPattern13(){
    for(int row=1;row<=5;row++){
        for(int col = 1;col<=5-row;col++){
            cout<<"  ";
        }
        for(int col = row;col>=1;col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}

int main(){
    printPattern13();
    return 0;
}