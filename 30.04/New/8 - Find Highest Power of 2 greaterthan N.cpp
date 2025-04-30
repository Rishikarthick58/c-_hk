#include <iostream>
using namespace std;

int highestPowerOf2(int n) {
    int power = 1;
    while (power * 2 <= n) {
        power *= 2;
    }
    return power;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Highest power of 2 <= n: " << highestPowerOf2(num);
    return 0;
}
