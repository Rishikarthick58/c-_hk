#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 3 == 0 && n % 5 == 0) {
        cout << "Divisible by both 3 and 5";
    } else {
        cout << "Not divisible by both";
    }
    return 0;
}
