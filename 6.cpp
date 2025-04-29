#include <iostream>
using namespace std;

bool isSumEven(int num1, int num2) {
    int sum = num1 + num2;
    return (sum % 2 == 0);
}

int main() {
    int number1, number2;

    cout << "Enter first number: ";
    cin >> number1;
    
    cout << "Enter second number: ";
    cin >> number2;

    if (isSumEven(number1, number2)) {
        cout << "The sum is even." << endl;
    } else {
        cout << "The sum is odd." << endl;
    }

    return 0;
}