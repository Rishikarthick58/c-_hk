#include <iostream>
using namespace std;

int main() {
    int n, rev = 0, temp;
    cin >> n;
    temp = n;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }
    if (rev == temp) {
        cout << "Palindrome number";
    } else {
        cout << "Not a palindrome";
    }
    return 0;
}
