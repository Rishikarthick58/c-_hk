#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, i = 2;
    cin >> n;
    while (i <= n) {
        sum += i;
        i += 2;
    }
    cout << "Sum of even numbers: " << sum;
    return 0;
}
