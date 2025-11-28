#include<iostream>
using namespace std;


// 1: Temperature Range: Write a program that checks if a given temperature is suitable for swimming. If the temperature is between 70 and 90 (Excluded) degrees Fahrenheit print yes, else NO.

    void checkTemperature(){
        int temFahren;

        cout<<"Enter temperature in F : ";
        cin>>temFahren;

        if(temFahren >= 70 && temFahren < 90)
            cout<<"Yes, temperature is suitable for swimming";
        else
            cout<<"No, temperature is not suitable for swimming";
        
    }


// 2: Even and Positive Number: Write a program that prints “YES” if a given number is both even and positive, otherwise it will print “NO”.

    void checkEvenPositive(){

        int num;

        cout<<"Enter number : ";
        cin>>num;

        if(num%2 == 0 && num >0)
            cout<<"YES  a given number is both even and positive";
        else
            cout<<"No,  a given number is not both even and positive";
    
    }

// 3: Age Check: Implement a program that checks if a person is a teenager. A teenager is someone whose age is between 13 and 19 (inclusive).

    void ageCheck(){
        
        int age;

        cout<<"Enter age : ";
        cin>>age;

        if(age < 12)
            return;
        
        if(age >= 13 && age < 19)
            cout<<"Yes, you are a teenager";
        else
            cout<<"An adult";
        
    }


// 4: Take three numbers a,b,c from the user, print yes if a is either greater than b or c. Otherwise print NO.

    void greaterNum(){
    
        int a,b,c;

        cout<<"Enter a, b, c : ";
        cin>>a>>b>>c;

        cout<<((a>b && a>c)?"Yes, a is greater":"No");

    }


    int main(){
        // checkTemperature();
        // checkEvenPositive();
        // ageCheck();
        // greaterNum();

        // 5: What will be the result below according to the precedence table.

        // 2*3-48==5/4*6
        // 6<<2-4*8/2
        // 5>4<3/2-8%4+5
        // 14-8+92>>2+70


        cout<<(2*3-48==5/4*6)<<endl;
        cout<<(6<<2-4*8/2)<<endl;
        cout<<( 5>4<3/2-8%4+5)<<endl;
        cout<<(14-8+92>>2+70)<<endl;

        return 0;
    }