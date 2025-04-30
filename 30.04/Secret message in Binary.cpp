#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    while (n > 0) {
        if (n % 2 == 1) {
            count++;
        }
        n = n / 2;
    }
    cout << "Number of 1s: " << count;
    return 0;
}
