#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    int i = 1;
    while (i < n) {
        if (n % i == 0) {
            sum += i;
        }
        i++;
    }
    if (sum == n) {
        cout << "Perfect number";
    } else {
        cout << "Not a perfect number";
    }
    return 0;
}
