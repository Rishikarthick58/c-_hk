#include <iostream>
using namespace std;

int main() {
    double p, r, t, amount = 1;
    cin >> p >> r >> t;
    int i = 0;
    while (i < t) {
        amount = amount * (1 + r / 100);
        i++;
    }
    double ci = amount * p - p;
    cout << "Compound Interest: " << ci;
    return 0;
}
