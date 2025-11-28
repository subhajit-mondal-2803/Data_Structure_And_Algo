#include<iostream>
using namespace std;

void decimalToBinary(int num){
    int rem,ans= 0,mul = 1;
    int realNumber = num;
    while(num != 0){
        rem = num & 1;   // rem = num%2;
        num = num >> 1; // num /= 2;
        ans += rem * mul;
        mul *= 10;
    }
    cout<<"Binary form of "<<realNumber <<" is "<<ans;
}

void binaryToDecimal(int num){
    int rem , ans = 0,mul = 1;

    while(num != 0){
        rem = num & 1;
        num = num >> 1;
        ans += rem * mul;
        mul *= 2;
    }
    cout<<ans;
}

int main(){
    // decimalToBinary(13);
    binaryToDecimal(0b111);
    return 0;
}