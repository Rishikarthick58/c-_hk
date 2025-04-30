#include <iostream>
using namespace std;

int findSmallestDigit(int num) {
    int minDigit = 9;
    while (num > 0) {
        int digit = num % 10;
        if (digit < minDigit) {
            minDigit = digit;
            if (minDigit == 0) break; // Can't get smaller than 0
        }
        num /= 10;
    }
    return minDigit;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Smallest digit: " << findSmallestDigit(n);
    return 0;
}
