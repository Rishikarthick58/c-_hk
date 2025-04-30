#include <iostream>
using namespace std;

void printDivisors(int n) {
    int i = 1;
    while (i <= n) {
        if (n % i == 0) {
            cout << i << " ";
        }
        i++;
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Divisors are: ";
    printDivisors(num);
    return 0;
}
