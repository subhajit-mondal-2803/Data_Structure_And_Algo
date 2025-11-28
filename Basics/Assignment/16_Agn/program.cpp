#include<iostream>
using namespace std;

// Write a program to convert binary numbers to decimal numbers using a for loop.

    int getDecimal(int binary){
        int rem, decimal=0;
        
        for(int mul=1; binary; binary /= 10 ){
            rem = binary % 10;
            decimal += rem * mul;
            mul *= 2;
        }

        // cout<<decimal;
        return decimal;
    }


// Write a program to convert decimal numbers to binary numbers using a for loop.

    int getBinary(int decimal){
        
        int rem,binary=0;

        for(int mul = 1; decimal; decimal /= 2){
            rem = decimal % 2;
            binary += rem * mul;
            mul *= 10;
        }

        // cout<<binary;
        return binary;
    }


// Write a program to convert decimal numbers to Octal numbers.

    int getOctal(int decimal){

        int rem, octal=0;

        for(int mul = 1; decimal; decimal /= 8){

            rem = decimal % 8;
            octal += rem * mul;
            mul *= 10;
        }

        // cout<<octal;
        return octal;
    }



// Write a program to convert Octal numbers to decimal numbers.

    int getOctaToDeci(int octal){

        int rem,decimal=0;

        for(int mul = 1; octal; octal /= 10){
            rem = octal % 10;
            decimal += rem * mul;
            mul *= 8;
        }

        // cout<<decimal;
        return decimal;
    }



// Write a program to convert binary to Octal numbers

    void binToOct(int binary){
        // convert binary to decimal
        int decimal = getDecimal(binary);

        // decimal to octal
        int octal = getOctal(decimal);

        cout<<octal;
    }


// Write a program to convert Octal numbers to binary numbers

    void octToBin(int octal){

        // octal to decimal
        int decimal = getOctaToDeci(octal);

        // decimal to binary
        int binary = getBinary(decimal);

        cout<<binary;
    }


int main(){

    // getDecimal(11111);
    // getBinary(25);
    // getOctal(96);
    // getOctaToDeci(140);
    // binToOct(11001);
    octToBin(31);
    return 0;
}