#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, count = 0;
    cin >> n;
    while (count < n) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
        count++;
    }
    return 0;
}
