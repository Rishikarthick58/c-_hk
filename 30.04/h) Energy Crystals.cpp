#include <iostream>
using namespace std;

int main() {
    int n, power = 1;
    cin >> n;
    while (power * 2 <= n) {
        power = power * 2;
    }
    cout << "Highest power of 2: " << power;
    return 0;
}
