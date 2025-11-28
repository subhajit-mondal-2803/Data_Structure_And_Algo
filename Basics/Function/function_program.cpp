#include <iostream>
using namespace std;

char upperCase(char ch)
{
    return ch - 32;
}

int numberOfDigits(int number)
{
    int digits = 0;
    while (number)
    {
        number /= 10;
        digits++;
    }
    return digits;
}

int power(int number, int exponent)
{
    int power = 1;

    for (int i = 1; i <= exponent; i++)
    {
        power *= number;
    }
    return power;
}

bool isArmstrong(int number)
{
    int originalNumber = number;
    int exponent = numberOfDigits(number); // Calculating power digit
    int sum = 0;
    while (number > 0)
    {
        sum += power(number % 10, exponent);
        number /= 10;
    }
    cout << sum << endl;
    return sum == originalNumber;
}

// Trailing Zero in factorial

// int count = 0;
// while (N >= 5)
// {
//     count += N / 5;
//     N /= 5;
// }

int main()
{
    // cout<<upperCase('a');
    cout << isArmstrong(153);
}