#include <iostream>
using namespace std;

int sumOddDigits(int num) {
    int sum = 0;
    while (num != 0) {
        int digit = num % 10;
        if (digit % 2 != 0) {
            sum += digit;
        }
        num /= 10;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of odd digits: " << sumOddDigits(n);
    return 0;
}
