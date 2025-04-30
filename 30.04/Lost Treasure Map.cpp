#include <iostream>
using namespace std;

int main() {
    int n, smallest = 9;
    cin >> n;
    while (n > 0) {
        int digit = n % 10;
        if (digit < smallest) {
            smallest = digit;
        }
        n = n / 10;
    }
    cout << "Smallest digit: " << smallest;
    return 0;
}
