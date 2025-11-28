#include<iostream>
using namespace std;

void pattern1(){
    for(int row = 1;row<=5;row++){
        for(int col =1;col<=5;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern2(){
    for(int row = 1;row<=5;row++){
        for(int col =1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern3(){
    for(int row = 1;row<=5;row++){
        for(int col =1;col<=row;col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}

void pattern4(){
    for(int row =1;row<=5;row++){
        for(int col = 1;col<=row;col++){
            cout<<row<<" ";
        }
        cout<<endl;
    }
}

void pattern5(){
    for(int row =1 ;row <= 5;row++){
        for(int col =1;col<=5-row+1;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern6(){
    for(int row =1 ;row <= 5;row++){
        for(int col =1;col<=5-row+1;col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}

void pattern7(){
    for(int row =1;row<=5;row++){
        for(int col =1;col<=5-row;col++){
            cout<<"  ";
        }
        for(int col = 1;col<=2*row-1;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern8(){
    for(int row =5;row>=1;row--){
        for(int col =1;col<=5-row;col++){
            cout<<"  ";
        }
        for(int col = 1;col<=2*row-1;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    pattern8();
    return 0;
}