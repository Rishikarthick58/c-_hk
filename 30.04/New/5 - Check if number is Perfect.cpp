#include <iostream>
using namespace std;

bool isPerfect(int n) {
    int sum = 0;
    int i = 1;
    while (i <= n / 2) {
        if (n % i == 0) {
            sum += i;
        }
        i++;
    }
    return sum == n;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPerfect(num))
        cout << "Perfect Number";
    else
        cout << "Not a Perfect Number";
    return 0;
}
