#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    int i = 2;
    while (i * i <= num) {
        if (num % i == 0)
            return false;
        i++;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int product = 1;
    while (n != 0) {
        int digit = n % 10;
        product *= digit;
        n /= 10;
    }
    
    if (isPrime(product))
        cout << "Product of digits is prime.";
    else
        cout << "Product of digits is not prime.";
        
    return 0;
}
