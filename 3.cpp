#include <iostream>
using namespace std;

void mirrorNumber(int n) {
    if (n == 0) {
        return; // Base case
    }
    
    cout << n % 10 << " "; // Print last digit
    mirrorNumber(n / 10);   // Recursive call with number divided by 10
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Mirrored number: ";
    mirrorNumber(number);

    cout << endl;

    return 0;
}
