#include<iostream>
using namespace std;

void patternOne(){
    for(int row = 1; row<=5;row++){
        for(int col =1;col<=5;col++){
            cout<<row<<" ";
        }
        cout<<endl;
    }
}

void patternTwo(){
    for(int row =1;row<=5;row++){
        for(int col = 5; col>0;col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}
int main(){
    patternTwo();
    return 0;
}