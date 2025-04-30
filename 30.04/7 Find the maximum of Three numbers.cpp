#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= b) {
        if (a >= c) {
            cout << "Maximum: " << a;
        } else {
            cout << "Maximum: " << c;
        }
    } else {
        if (b >= c) {
            cout << "Maximum: " << b;
        } else {
            cout << "Maximum: " << c;
        }
    }
    return 0;
}
