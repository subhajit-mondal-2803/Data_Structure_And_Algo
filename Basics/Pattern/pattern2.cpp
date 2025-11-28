#include<iostream>
using namespace std;

void printPatternOne(){
    for(int row =1;row<=5;row++){
        for(int col=1;col<=row;col++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

void printPatternTwo(){
    for(int row=1;row<=5;row++){
        for(int col = 1;col<=row;col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}

void printPatternThree(){
    for(int row = 1;row<=5;row++){
        for(int col = 1;col<=row;col++){
            cout<<row<<" ";
        }
        cout<<endl;
    }
}

void printPatternFour(){
    for(int row = 1;row<=5;row++){
        for(int col = row;col>=1;col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}

void printPatternFive(){
    for(int row = 1;row<=5;row++){
        char ch = 'a'+(row-1);
        for(int col = 1;col<=row;col++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void printPatternSix(){
    for(int row = 1;row<=5;row++){
        for(int col = 1;col<=5-row+1;col++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

void printPatternSeven(){
    for(int row = 5;row>=1;row--){
        for(int col = 1;col<=row;col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}

void printPatternEight(){
    for(int row=5;row>=1;row--){
        for(int col = 5;col>=row;col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}

int main(){
    printPatternEight();
    return 0;
}