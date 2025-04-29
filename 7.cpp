#include <iostream>
using namespace std;

int formNewNumber(int num1, int num2) {
    int lastDigit = num1 % 10;

    while (num2 >= 10) {
        num2 = num2 / 10;
    }
    int firstDigit = num2;

    int newNumber = (lastDigit * 10) + firstDigit;
    return newNumber;
}

int main() {
    int number1, number2;

    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    int result = formNewNumber(number1, number2);

    cout << "The new number is: " << result << endl;

    return 0;
}