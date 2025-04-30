#include <iostream>
using namespace std;

int firstNonZero(int n) {
    while (n >= 10) {
        n /= 10;
    }
    return n;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    while (num % 10 == 0) {
        num /= 10;
    }
    
    cout << "First non-zero digit: " << firstNonZero(num);
    return 0;
}
